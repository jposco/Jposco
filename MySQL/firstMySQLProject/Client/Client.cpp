#pragma comment(lib, "ws2_32.lib")

#include <WinSock2.h> //Winsock ������� include. WSADATA �������.��
#include <WS2tcpip.h>
#include <string>
#include <sstream>
#include <iostream>
#include <thread>
#include <mysql/jdbc.h>
#include <conio.h> 

using std::cout;
using std::cin; 
using std::endl;
using std::string;

#define MAX_SIZE 1024

const string server = "tcp://127.0.0.1:3306"; // �����ͺ��̽� �ּ�
const string username = "root"; // �����ͺ��̽� �����
const string password = "07wd2713"; // �����ͺ��̽� ���� ��й�ȣ

// MySQL Connector/C++ �ʱ�ȭ
sql::mysql::MySQL_Driver* driver; // ���� �������� �ʾƵ� Connector/C++�� �ڵ����� ������ �� 
sql::Connection* con; //����
sql::PreparedStatement* pstmt; //���߿� �� �Է�
sql::ResultSet* result;
sql::Statement* stmt;

SOCKET client_sock;
string my_nick;

void mainMenu()
{
    cout << "\n";
    cout << "\t"; cout << "********************************** \n";
    cout << "\t"; cout << "*                                * \n";
    cout << "\t"; cout << "*  *******    *     *     *  *   * \n";
    cout << "\t"; cout << "*     *      * *    *     * *    * \n";
    cout << "\t"; cout << "*     *     *****   *     **     * \n";
    cout << "\t"; cout << "*     *    *     *  *     * *    * \n";
    cout << "\t"; cout << "*     *   *       * ***** *  *   * \n";
    cout << "\t"; cout << "*                                * \n";
    cout << "\t"; cout << "*                                * \n";
    cout << "\t"; cout << "*                                * \n";
    cout << "\t"; cout << "*       1.�α���                 * \n";
    cout << "\t"; cout << "*                                * \n";
    cout << "\t"; cout << "*       2. ID ã��               * \n";
    cout << "\t"; cout << "*                                * \n";
    cout << "\t"; cout << "*       3. PW ã��               * \n";
    cout << "\t"; cout << "*                                * \n";
    cout << "\t"; cout << "*       4. ȸ������              * \n";
    cout << "\t"; cout << "*                                * \n";
    cout << "\t"; cout << "*       0. ����                  * \n";
    cout << "\t"; cout << "*                                * \n";
    cout << "\t"; cout << "********************************** \n\n";
}

class SQL
{
private:
    string id, pw, name, phone, status, birth, song = "";
public:
    SQL()
    {
        try {
            driver = sql::mysql::get_mysql_driver_instance();
            con = driver->connect(server, username, password);
        }
        catch (sql::SQLException& e) {
            cout << "Could not connect to server. Error message: " << e.what() << endl;
            exit(1);
        }

        // �����ͺ��̽� ����
        con->setSchema("project1");

        // DB �ѱ� ������ ���� ����
        stmt = con->createStatement();
        stmt->execute("set names euckr");
        if (stmt) { delete stmt; stmt = nullptr; }
    }

    void login()
    {
        cout << "id";
        cin >> id;
        this->id = id;
        cout << "pw";
        char ch = ' ';
        while (ch != 13) { // Enter Ű�� ������ �Է� ����
            ch = _getch();
            if (ch == 13) break; // Enter Ű�� ������ �Է� ����
            if (ch == 8) { // Backspace Ű�� ���
                if (!pw.empty()) { // �Էµ� ���ڰ� ������
                    pw.pop_back(); // ������ ���ڸ� ����
                    cout << "\b \b"; // Ŀ�� ��ġ�� �������� �̵����� ������ ����� ��, �ٽ� Ŀ�� ��ġ�� ������� �̵���Ŵ
                }
            }
            else {
                pw.push_back(ch);
                cout << '*'; // ��ǥ�� ��ü�Ͽ� ���
            }
        }
        cout << endl;

        pstmt = con->prepareStatement("SELECT id, pw, name FROM user \
            WHERE id=?");
        pstmt->setString(1, id);
        result = pstmt->executeQuery();

        if (result->next())
        { // ���� ����� �ִٸ�
            string db_id = result->getString(1); // �����ͺ��̽����� ������ ID
            string db_pw = result->getString(2); // �����ͺ��̽����� ������ PW

            if (db_id == id && db_pw == pw)
            {
                name = result->getString(3);
                this->name = name;
                cout << name << "�� ȯ���մϴ�." << endl;
            }
            else cout << "�ش��ϴ� ������ �����ϴ�." << endl;
        }
        else cout << "�ش��ϴ� ������ �����ϴ�." << endl;

        cout << "�α��� �Ϸ�." << endl;
    }
    void searchId()
    {
        cout << "name";
        cin >> name;
        cout << "phone";
        cin >> phone;
        cout << "birth";
        cin >> birth;

        string year = birth.substr(0, 4);
        string month = birth.substr(4, 2);
        string day = birth.substr(6, 2);
        string DATE = year + "-" + month + "-" + day;

        pstmt = con->prepareStatement("SELECT id, name, phone, birth FROM user WHERE phone=?");
        pstmt->setString(1, phone);
        result = pstmt->executeQuery();

        if (result->next())
        {
            string db_id = result->getString(1);
            string db_name = result->getString(2);
            string db_phone = result->getString(3);
            string db_birth = result->getString(4);

            if (db_name == name && db_phone == phone && db_birth == DATE)
            {
                cout << name << "���� ���̵�� " << db_id << "�Դϴ�." << endl;
            }
            else  cout << "�ش��ϴ� ������ �����ϴ�." << endl;
        }
        else cout << "�ش��ϴ� ������ �����ϴ�." << endl;
    }
    void searchPw()
    {
        cout << "id";
        cin >> id;
        cout << "name";
        cin >> name;
        cout << "phone";
        cin >> phone;
        cout << "birth";
        cin >> birth;

        string year = birth.substr(0, 4);
        string month = birth.substr(4, 2);
        string day = birth.substr(6, 2);
        string DATE = year + "-" + month + "-" + day;

        pstmt = con->prepareStatement("SELECT id, name, phone, birth FROM user WHERE id=?");
        pstmt->setString(1, id);
        result = pstmt->executeQuery();

        if (result->next())
        {
            string db_id = result->getString(1);
            string db_name = result->getString(2);
            string db_phone = result->getString(3);
            string db_birth = result->getString(4);

            if (db_id == id && db_name == name && db_phone == phone && db_birth == DATE)
            {
                string new_pw = "";
                cout << "new_pw";
                char ch = ' ';
                while (ch != 13) { // Enter Ű�� ������ �Է� ����
                    ch = _getch();
                    if (ch == 13) break; // Enter Ű�� ������ �Է� ����
                    if (ch == 8) { // Backspace Ű�� ���
                        if (!pw.empty()) { // �Էµ� ���ڰ� ������
                            pw.pop_back(); // ������ ���ڸ� ����
                            cout << "\b \b"; // Ŀ�� ��ġ�� �������� �̵����� ������ ����� ��, �ٽ� Ŀ�� ��ġ�� ������� �̵���Ŵ
                        }
                    }
                    else {
                        new_pw.push_back(ch);
                        cout << '*'; // ��ǥ�� ��ü�Ͽ� ���
                    }
                }
                cout << endl;
                string renew_pw = "";
                cout << "renew_pw";
                char rech = ' ';
                while (rech != 13) { // Enter Ű�� ������ �Է� ����
                    rech = _getch();
                    if (rech == 13) break; // Enter Ű�� ������ �Է� ����
                    if (ch == 8) { // Backspace Ű�� ���
                        if (!pw.empty()) { // �Էµ� ���ڰ� ������
                            pw.pop_back(); // ������ ���ڸ� ����
                            cout << "\b \b"; // Ŀ�� ��ġ�� �������� �̵����� ������ ����� ��, �ٽ� Ŀ�� ��ġ�� ������� �̵���Ŵ
                        }
                    }
                    else {
                        renew_pw.push_back(rech);
                        cout << '*'; // ��ǥ�� ��ü�Ͽ� ���
                    }
                }
                cout << endl;

                if (new_pw == renew_pw)
                {
                    pstmt = con->prepareStatement("UPDATE user SET pw = ? WHERE id = ?");
                    pstmt->setString(1, new_pw);
                    pstmt->setString(2, id);
                    pstmt->executeQuery();
                    printf("New PW updated\n");
                }
                else cout << "��й�ȣ�� �ٸ��ϴ�." << endl;
            }
            else  cout << "�ش��ϴ� ������ �����ϴ�." << endl;
        }
        else cout << "�ش��ϴ� ������ �����ϴ�." << endl;
    }
    void crateUser()
    {
        while (1)
        {
            cout << "id";
            cin >> id;
            pstmt = con->prepareStatement("SELECT id FROM user WHERE id=?");
            pstmt->setString(1, id);
            result = pstmt->executeQuery();

            if (result->next())
            {
                string db_id = result->getString(1);
                if (db_id == id) {
                    cout << "�ߺ��� id�� �ֽ��ϴ�." << endl;
                }
                else {
                    cout << "�ߺ�üũ �Ϸ�." << endl;
                }
            }
        }
        while (1)
        {
            cout << "pw";
            char ch = ' ';
            while (ch != 13)
            { // Enter Ű�� ������ �Է� ����
                ch = _getch();
                if (ch == 13) break; // Enter Ű�� ������ �Է� ����
                if (ch == 8) { // Backspace Ű�� ���
                    if (!pw.empty()) { // �Էµ� ���ڰ� ������
                        pw.pop_back(); // ������ ���ڸ� ����
                        cout << "\b \b"; // Ŀ�� ��ġ�� �������� �̵����� ������ ����� ��, �ٽ� Ŀ�� ��ġ�� ������� �̵���Ŵ
                    }
                }
                else {
                    pw.push_back(ch);
                    cout << '*'; // ��ǥ�� ��ü�Ͽ� ���
                }
            }
            string re_pw = "";
            cout << "renew_pw";
            char rech = ' ';
            while (rech != 13)
            { // Enter Ű�� ������ �Է� ����
                rech = _getch();
                if (rech == 13) break; // Enter Ű�� ������ �Է� ����
                if (ch == 8) { // Backspace Ű�� ���
                    if (!re_pw.empty()) { // �Էµ� ���ڰ� ������
                        re_pw.pop_back(); // ������ ���ڸ� ����
                        cout << "\b \b"; // Ŀ�� ��ġ�� �������� �̵����� ������ ����� ��, �ٽ� Ŀ�� ��ġ�� ������� �̵���Ŵ
                    }
                }
                else {
                    re_pw.push_back(rech);
                    cout << '*'; // ��ǥ�� ��ü�Ͽ� ���
                }
            }
            if (pw == re_pw)
            {
                break;
            }
            else cout << "��й�ȣ�� �ٸ��ϴ�." << endl;
        }
        cout << "name";
        cin >> name;
        cout << "phone";
        cin >> phone;
        cout << "birth 8�ڸ��Է�";
        cin >> birth;

        string year = birth.substr(0, 4);
        string month = birth.substr(4, 2);
        string day = birth.substr(6, 2);
        string DATE = year + "-" + month + "-" + day;

        pstmt = con->prepareStatement("INSERT INTO user(id, pw, name, phone, birth) VALUE(?, ?, ?, ?, ?)");
        pstmt->setString(1, id);
        pstmt->setString(2, pw);
        pstmt->setString(3, name);
        pstmt->setString(4, phone);
        pstmt->setString(5, DATE);
        pstmt->execute();
        cout << "ȸ������ �Ϸ�." << endl;
    }
    void myProfile()
    {
        pstmt = con->prepareStatement("SELECT name, status, song, birth, phone FROM user WHERE id = ?;");
        pstmt->setString(1, id);
        result = pstmt->executeQuery();

        while (result->next())
        {
            cout << "�̸� : " << result->getString("name") << endl;
            if (result->getString("status") == "") 
            {
                cout << "��� : ����" << endl;
            }
            else {
                cout << "��� : " << result->getString("status") << endl;
            }
            if (result->getString("song") == "")
            {
                cout << "�뷡 : ����" << endl;
            }
            else {
                cout << "�뷡 : " << result->getString("status") << endl;
            }
            cout << "���� : " << result->getString("birth") << endl;
            cout << "��ȣ : " << result->getString("phone") << endl;
        }
    }
    void updateStatus()
    {
        cout << "status";
        cin >> status;
        pstmt = con->prepareStatement("UPDATE user SET status = ? WHERE id = ?");
        pstmt->setString(1, status);
        pstmt->setString(2, id);
        pstmt->executeQuery();
        printf("Status updated\n");
    }
    void updateSong()
    {
        cout << "song";
        cin >> song;
        pstmt = con->prepareStatement("UPDATE user SET song = ? WHERE id = ?");
        pstmt->setString(1, song);
        pstmt->setString(2, id);
        pstmt->executeQuery();
        printf("Song updated\n");
    }
    void friends()
    {
        pstmt = con->prepareStatement("SELECT name, status, song, birth, phone FROM user WHERE id != ?;");
        pstmt->setString(1, id);
        result = pstmt->executeQuery();

        while (result->next())
        {
            cout << "�̸� : " << result->getString("name") << endl;
            // status ���� NULL�� ��� "����"���� ���
            if (result->wasNull()) {
                cout << "��� : ����" << endl;
            }
            else {
                cout << "��� : " << result->getString("status") << endl;
            }
            // song ���� NULL�� ��� "����"���� ���
            if (result->wasNull()) {
                cout << "���� : ����" << endl;
            }
            else {
                cout << "���� : " << result->getString("song") << endl;
            }
            cout << "���� : " << result->getString("birth") << endl;
            cout << "��ȣ : " << result->getString("phone") << endl;
        }
    }
    void searchBirth()
    {
        string startDay, endDay;
        cout << "startDay";
        cin >> startDay;// 0303
        cout << "endDay";//0505
        cin >> endDay;
        pstmt = con->prepareStatement("SELECT name, birth FROM user \
            WHERE DATE_FORMAT(birth, '%m%d') BETWEEN ? AND ? \
            AND id != ?;");
        pstmt->setString(1, startDay);
        pstmt->setString(2, endDay);
        pstmt->setString(3, id);
        result = pstmt->executeQuery();

        while (result->next())
        {
            cout << "�̸� : " << result->getString("name") << endl;
            cout << "���� : " << result->getString("birth") << endl;
        }
    }
    void modifyPw()
    {
        cout << "���� pw";
        string in_pw = "";
        char ch = ' ';
        while (ch != 13) { // Enter Ű�� ������ �Է� ����
            ch = _getch();
            if (ch == 13) break; // Enter Ű�� ������ �Է� ����
            in_pw.push_back(ch);
            cout << '*'; // ��ǥ�� ��ü�Ͽ� ���
        }
        cout << endl;

        pstmt = con->prepareStatement("SELECT pw FROM user WHERE id=?");
        pstmt->setString(1, id);
        result = pstmt->executeQuery();
        if (result->next())
        { // ���� ����� �ִٸ�
            string db_pw = result->getString(1); // �����ͺ��̽����� ������ pw
            if (db_pw == in_pw)
            {
                string new_pw = "";
                cout << "new_pw";
                char ch = ' ';
                while (ch != 13)
                { // Enter Ű�� ������ �Է� ����
                    ch = _getch();
                    if (ch == 13) break; // Enter Ű�� ������ �Է� ����
                    if (ch == 8) { // Backspace Ű�� ���
                        if (!pw.empty()) { // �Էµ� ���ڰ� ������
                            pw.pop_back(); // ������ ���ڸ� ����
                            cout << "\b \b"; // Ŀ�� ��ġ�� �������� �̵����� ������ ����� ��, �ٽ� Ŀ�� ��ġ�� ������� �̵���Ŵ
                        }
                    }
                    else {
                        new_pw.push_back(ch);
                        cout << '*'; // ��ǥ�� ��ü�Ͽ� ���
                    }
                }
                string renew_pw = "";
                cout << "renew_pw";
                char rech = ' ';
                while (rech != 13)
                { // Enter Ű�� ������ �Է� ����
                    rech = _getch();
                    if (rech == 13) break; // Enter Ű�� ������ �Է� ����
                    if (ch == 8) { // Backspace Ű�� ���
                        if (!pw.empty()) { // �Էµ� ���ڰ� ������
                            pw.pop_back(); // ������ ���ڸ� ����
                            cout << "\b \b"; // Ŀ�� ��ġ�� �������� �̵����� ������ ����� ��, �ٽ� Ŀ�� ��ġ�� ������� �̵���Ŵ
                        }
                    }
                    else {
                        renew_pw.push_back(rech);
                        cout << '*'; // ��ǥ�� ��ü�Ͽ� ���
                    }
                }
                if (new_pw == renew_pw)
                {
                    pstmt = con->prepareStatement("UPDATE user SET pw = ? WHERE id = ?");
                    pstmt->setString(1, new_pw);
                    pstmt->setString(2, id);
                    pstmt->executeQuery();
                    printf("New PW updated\n");
                }
                else cout << "��й�ȣ�� �ٸ��ϴ�." << endl;
            }
        }
    }
    void deleteUser()
    {
        string pw = "";
        cout << "���� pw";
        char ch = ' ';
        while (ch != 13) { // Enter Ű�� ������ �Է� ����
            ch = _getch();
            if (ch == 13) break; // Enter Ű�� ������ �Է� ����
            if (ch == 8) { // Backspace Ű�� ���
                if (!pw.empty()) { // �Էµ� ���ڰ� ������
                    pw.pop_back(); // ������ ���ڸ� ����
                    cout << "\b \b"; // Ŀ�� ��ġ�� �������� �̵����� ������ ����� ��, �ٽ� Ŀ�� ��ġ�� ������� �̵���Ŵ
                }
            }
            else {
                pw.push_back(ch);
                cout << '*'; // ��ǥ�� ��ü�Ͽ� ���
            }
        }
        cout << endl;

        pstmt = con->prepareStatement("SELECT pw FROM user \
            WHERE id=?");
        pstmt->setString(1, id);
        result = pstmt->executeQuery();

        if (result->next())
        { // ���� ����� �ִٸ�
            string db_pw = result->getString(1); // �����ͺ��̽����� ������ PW

            if (db_pw == pw)
            {
                cout << "���� �����Ͻðڽ��ϱ�? ������ ���Ŀ� �ǵ��� �� �����ϴ�. ����ϱ�:1, �׸��α�:2";
                char check;
                cin >> check;
                while (1)
                {
                    if (check == '1')
                    {
                        pstmt = con->prepareStatement("DELETE FROM user WHERE id = ?");
                        pstmt->setString(1, id);
                        result = pstmt->executeQuery();
                        cout << "�����Ϸ�." << endl;
                    }
                    else if (check == '2') cout << "���ư��ϴ�." << endl;
                    else cout << "�߸��� �Է��Դϴ�." << endl;
                }
            }
            else cout << "��й�ȣ ����ġ." << endl;
        }
        else cout << "�ش��ϴ� ������ �����ϴ�." << endl;
    }
};

int chat_recv() {
    char buf[MAX_SIZE] = { };
    string msg;

    while (1) {
        ZeroMemory(&buf, MAX_SIZE);
        if (recv(client_sock, buf, MAX_SIZE, 0) > 0) {
            msg = buf;
            //�г��� : �޽���
            std::stringstream ss(msg);  // ���ڿ��� ��Ʈ��ȭ
            string user;
            ss >> user; // ��Ʈ���� ����, ���ڿ��� ���� �и��� ������ �Ҵ�
            //���⸦ �������� �г��� ����
            if (user != my_nick) cout << buf << endl; // �� �г��Ӱ� ������ �� ���� ���� �� �ƴ� ���(����)���� ����ϵ���.
        }
        else {
            cout << "Server Off" << endl;
            return -1;
        }
    }
}

int main()
{
    mainMenu();
    SQL sql;
    sql.login();
    //sql.searchId();
    sql.searchPw();
    //sql.crateUser();//ȸ�� ����
    sql.myProfile(); //�� ����
    //sql.updateStatus(); //��� ����
    //sql.updateSong(); //�뷡 ����
    //sql.friends(); //�� ģ��
    //sql.searchBirth(); //���� �˻�
    //sql.modifyPw(); //��� ����
    //sql.deleteUser(); //ȸ�� Ż��
    //system("cls");
    //system("pause");

    WSADATA wsa;
    int code = WSAStartup(MAKEWORD(2, 2), &wsa);

    if (!code) {
        cout << "login on";
        client_sock = socket(PF_INET, SOCK_STREAM, IPPROTO_TCP);

        SOCKADDR_IN client_addr = {};
        client_addr.sin_family = AF_INET;
        client_addr.sin_port = htons(7777);
        InetPton(AF_INET, TEXT("127.0.0.1"), &client_addr.sin_addr);

        while (1) {
            if (!connect(client_sock, (SOCKADDR*)&client_addr, sizeof(client_addr))) {
                cout << "Server Connect" << endl;
                send(client_sock, my_nick.c_str(), my_nick.length(), 0);
                break;
            }
            cout << "Connecting..." << endl;
        }

        std::thread th2(chat_recv);

        while (1) {
            string text;
            std::getline(cin, text);
            const char* buffer = text.c_str(); // string���� char* Ÿ������ ��ȯ
            send(client_sock, buffer, strlen(buffer), 0);
        }
        th2.join();
        closesocket(client_sock);
    }

    WSACleanup();

    delete result;
    delete pstmt;
    delete con;
    delete stmt;

    return 0;
}

//<getch�Լ�>
//����ڰ� �Է��� Ű���� ���ڸ� ��� �������� �Լ��Դϴ�.
//�� �Լ��� Ű�� ������ �ٷ� �� ���� ��ȯ�ϸ�, �Է¹��� Ű�� ȭ�鿡 ������� �ʽ��ϴ�.
//��й�ȣ�� ���� ���ȼ��� �ʿ��� ������ �Է¹��� �� ����ϸ� �����մϴ�
//ch ������ 13�� ������ ������, 13�� Enter Ű�� ��Ÿ���� �����Դϴ�.
//while ���� Enter Ű�� ������ ������ ����ؼ� ������� �Է��� �޽��ϴ�.
//getch() �Լ��� �ֿܼ��� ����ڰ� �Է��� ���� �о���Դϴ�.
//����ڰ� Enter Ű�� ������, while ���� ����˴ϴ�.
//
//��й�ȣ �Է� ��, �Էµ� ���ڿ��� ��ǥ�� ��ü�ϱ� ����,
//�Էµ� ���ڿ��� pw ������ push_back() �Լ��� �����մϴ�.
//push_back() �Լ��� ���ڿ��� �� �ڿ� ���ڸ� �߰��մϴ�.
//
//�׸���, cout << '' �� ����, �Էµ� ���ڿ��� ��ǥ()�� ��ü�Ͽ� ����մϴ�.
//�̷��� �Ǹ�, ����ڰ� �Է��� ��й�ȣ�� ��ǥ�� ��ü�Ǿ� ���ȼ��� �������ϴ�.