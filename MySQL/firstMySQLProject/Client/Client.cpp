#pragma comment(lib, "ws2_32.lib")

#include <WinSock2.h> //Winsock 헤더파일 include. WSADATA 들어있음.ㄴ
#include <WS2tcpip.h>
#include <string>
#include <sstream>
#include <iostream>
#include <thread>
#include <mysql/jdbc.h>

using std::cout;
using std::cin;
using std::endl;
using std::string;

#define MAX_SIZE 1024


const string server = "tcp://127.0.0.1:3306"; // 데이터베이스 주소
const string username = "root"; // 데이터베이스 사용자
const string password = "07wd2713"; // 데이터베이스 접속 비밀번호

// MySQL Connector/C++ 초기화
sql::mysql::MySQL_Driver* driver; // 추후 해제하지 않아도 Connector/C++가 자동으로 해제해 줌 
sql::Connection* con; //연결
sql::PreparedStatement* pstmt; //나중에 값 입력
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
    cout << "\t"; cout << "*       1.로그인                 * \n";
    cout << "\t"; cout << "*                                * \n";
    cout << "\t"; cout << "*       2. ID 찾기               * \n";
    cout << "\t"; cout << "*                                * \n";
    cout << "\t"; cout << "*       3. PW 찾기               * \n";
    cout << "\t"; cout << "*                                * \n";
    cout << "\t"; cout << "*       4. 회원가입              * \n";
    cout << "\t"; cout << "*                                * \n";
    cout << "\t"; cout << "*       0. 종료                  * \n";
    cout << "\t"; cout << "*                                * \n";
    cout << "\t"; cout << "********************************** \n\n";
}

class SQL
{
    string id, pw, name, phone, status, inBirth, song = "";
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

        // 데이터베이스 선택
        con->setSchema("project1");

        // DB 한글 저장을 위한 셋팅
        stmt = con->createStatement();
        stmt->execute("set names euckr");
        if (stmt) { delete stmt; stmt = nullptr; }
    }
    void crateUser()
    {
        cout << "id";
        cin >> id;
        this->id = id;
        cout << "pw";
        cin >> pw;
        cout << "name";
        cin >> name;
        cout << "phone";
        cin >> phone;
        cout << "birth 8자리입력";
        cin >> inBirth;

        string year = inBirth.substr(0, 4);
        string month = inBirth.substr(4, 2);
        string day = inBirth.substr(6, 2);
        string DATE = year + "-" + month + "-" + day;

        pstmt = con->prepareStatement("INSERT INTO user(id, pw, name, phone, birth) VALUE(?, ?, ?, ?, ?)");
        pstmt->setString(1, id);
        pstmt->setString(2, pw);
        pstmt->setString(3, name);
        pstmt->setString(4, phone);
        pstmt->setString(5, DATE);
        pstmt->execute();
        cout << "inserted." << endl;
    }
    void myProfile()
    {
        pstmt = con->prepareStatement("SELECT name, status, song, birth, phone FROM user WHERE id = ?;");
        pstmt->setString(1, id);
        result = pstmt->executeQuery();

        while (result->next())
        {
                cout << "이름 : " << result->getString("name") << endl;
                // status 값이 NULL인 경우 "없음"으로 출력
                if (result->wasNull()) {
                    cout << "상메 : 없음" << endl;
                }
                else {
                    cout << "상메 : " << result->getString("status") << endl;
                }
                // song 값이 NULL인 경우 "없음"으로 출력
                if (result->wasNull()) {
                    cout << "음악 : 없음" << endl;
                }
                else {
                    cout << "음악 : " << result->getString("song") << endl;
                }
                cout << "생일 : " << result->getString("birth") << endl;
                cout << "번호 : " << result->getString("phone") << endl;            
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
            cout << "이름 : " << result->getString("name") << endl;
            // status 값이 NULL인 경우 "없음"으로 출력
            if (result->wasNull()) {
                cout << "상메 : 없음" << endl;
            }
            else {
                cout << "상메 : " << result->getString("status") << endl;
            }
            // song 값이 NULL인 경우 "없음"으로 출력
            if (result->wasNull()) {
                cout << "음악 : 없음" << endl;
            }
            else {
                cout << "음악 : " << result->getString("song") << endl;
            }
            cout << "생일 : " << result->getString("birth") << endl;
            cout << "번호 : " << result->getString("phone") << endl;
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
            cout << "이름 : " << result->getString("name") << endl;
            cout << "생일 : " << result->getString("birth") << endl;
        }

    }
};

int chat_recv() {
    char buf[MAX_SIZE] = { };
    string msg;

    while (1) {
        ZeroMemory(&buf, MAX_SIZE);
        if (recv(client_sock, buf, MAX_SIZE, 0) > 0) {
            msg = buf;
            //닉네임 : 메시지
            std::stringstream ss(msg);  // 문자열을 스트림화
            string user;
            ss >> user; // 스트림을 통해, 문자열을 공백 분리해 변수에 할당
            //띄어쓰기를 기준으로 닉네임 추출
            if (user != my_nick) cout << buf << endl; // 내 닉네임과 대조한 후 내가 보낸 게 아닐 경우(상대방)에만 출력하도록.
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
    sql.crateUser();
//    //system("cls");
//    sql.myProfile();
//    sql.updateStatus();
//    sql.updateSong();
//    sql.friends();
      sql.searchBirth();







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
            const char* buffer = text.c_str(); // string형을 char* 타입으로 변환
            send(client_sock, buffer, strlen(buffer), 0);
        }
        th2.join();
        closesocket(client_sock);
    }

    WSACleanup();
    return 0;
}

////select  
//pstmt = con->prepareStatement("SELECT * FROM inventory;");
//result = pstmt->executeQuery();

//while (result->next())
//    printf("Reading from table=(%d, %s, %d)\n", result->getInt(1), result->getString(2).c_str(), result->getInt(3));

////update
//pstmt = con->prepareStatement("UPDATE inventory SET quantity = ? WHERE name = ?");
//pstmt->setInt(1, 200);
//pstmt->setString(2, "banana");
//pstmt->executeQuery();
//printf("Row updated\n");

////delete
//pstmt = con->prepareStatement("DELETE FROM inventory WHERE name = ?");
//pstmt->setString(1, "orange");
//result = pstmt->executeQuery();
//printf("Row deleted\n");

// MySQL Connector/C++ 정리
//delete result;
//delete pstmt;
//delete con;
//system("pause");