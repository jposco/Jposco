#include <iostream>
#include <string>
#include <fstream> //������ �а�, �� �� �ֵ��� ���� ����� �����ϴ� ���
#include <vector>
using namespace std;

int main()
{
    //---------------------------------------------------------------------------
    ////�ǽ� 1 ���Ͽ� �Էµ� ���� �ҷ��� �ٸ� ���Ͽ� �Է��ϱ�
            //ifstream file; // ������ ���� ���� ����
            //file.open("hello.txt"); //���� �� �ش��ϴ� ���� ����
            //string line; //line�̶�� ���� ����
            //ofstream file2("output.txt"); //���� �Է��� ���ϸ��� �Է�
            //if (file.is_open()) {
            //    while (getline(file, line))//getline(cin,ifstream, line�̶�� ������ ����)
            //    {
            //        file2 << line << endl;
            //    }
            //}
            //else cout << "fail" << endl;

    ////���͸� ����� �ǽ�1 ����
        //ifstream infile("hello.txt");
        //ofstream outfile("output.txt");
        //string line;
        //vector<string> v1;

        //if (infile.is_open() && outfile.is_open()) {
        //    while (getline(infile, line)) {
        //        v1.push_back(line);
        //    }

        //    for (int i = v1.size() - 1; i >= 0; i--) {
        //        outfile << v1[i] << endl;
        //    }
        //}
        //else cout << "���� ����" << endl;

        ////----------------------------------------------------------------------------
        //�ǽ� 2 ȸ�� ��� �ۼ��ϱ�
            //ofstream file("�ǽ�2.txt"); //���� �Է��� ���ϸ��� �Է�
            //string line;
            //string name[3], pin[3];

            //cout << "3���� ȸ���� ���� �̸� ��й�ȣ�� ���������� �Է��ϼ���." << endl;
            //    for (int i = 0; i < 3; i++) {
            //        cin >> name[i] >> pin[i];
            //        file << name[i]<< pin[i] << endl;

            //    }

            //    cout << "-----------------ȸ�� ��� ���� �б�------------------" << endl;
            //ifstream file2; // ������ ���� ���� ����
            //file2.open("�ǽ�2.txt"); //���� �� �ش��ϴ� ���� ����
            //
            //string line2;
            //if (file2.is_open()) {
            //    while (getline(file2, line2))//getline(cin,ifstream), line�̶�� ������ ����)
            //    {
            //        cout << line2 << endl;
            //    }
            //}
            //else cout << "fail" << endl;
 ////���͸� �̿��� �ǽ� 2 Ǯ��
 // ofstream member("member.txt");
	
    cout << "3���� ȸ���� ���� �̸�, ��й�ȣ�� ���������� �Է��ϼ���.\n";

    for (int i = 0; i < 3; i++) {
        cout << i + 1 << "��° ȸ�� : ";

        string info;
        getline(cin, info);

        if (member.is_open()) member << info << endl;
    }

    member.close();

    ifstream member_r("member.txt");
    string line;

    if (member_r.is_open()) {
        while (getline(member_r, line)) {
            cout << line << endl;
        }
    }

    member_r.close();
}
        ////-----------------------------------------------------------------------------------
        ////����3 ȸ�� ��θ� ������ �α��� ���

    string name, pin, num;
    cout << "�̸��� �Է��ϼ��� : ";
    cin >> name;
    cout << endl << "��й�ȣ�� �Է��ϼ��� : ";
    cin >> pin;

    ifstream file("�ǽ�2.txt"); // //file�̶� ������ �ǽ�2�� ������ �ִ�
    string line; //line = ȫ�浿ȣ��ȣ�� ��浿�Ѹ� ����Ʈ����Ʈ
    vector<string> v;
    if (file.is_open()) {
        while (getline(file, line))
        {
            getline(file, line);//file=�ǽ�2�� ������ line�̶�� ������ ����
            v.push_back(line);//file�� �ִ� �� ���徿�� line �迭�� ����
        }
        //< �ǽ�2.txt >
        //[0] ȫ�浿ȣ��ȣ��
        //[1] ��浿�Ѹ�
        //[2] ����Ʈ����Ʈ

        string sum = name + pin;
        for (int i = 0; i < v.size(); i++) {
            if (sum == v[i])
            {//�Ƶ� ��� == �ǽ�2.txt
                cout << "�α��� ����" << endl;
                cout << " ��ȭ��ȣ�� �Է��ϼ���. : ";
                cin >> num;
            }
            else
            {
                cout << "�α��� ����" << endl;
                break;
            }
            return 0;
        }
    }
    file.close();

    ifstream file_v("member_tel.txt");
    vector<string> v1;
    string sum_v = name + num;
    string line_v;
    if (file_v.is_open()) {
        while (getline(file_v, line_v)) {//getline(cin,ifstream), line�̶�� ������ ����)
            v1.push_back(line_v);
        }
        for (int i = 0; i < v1.size(); i++)
        {
            if (v1[i] == sum_v)
            {
                v1[i] = sum_v;
            }
            else {
                v1.push_back(sum_v);
            }
        }
       
    }
    file_v.close();

    ofstream in("member_tel.txt");
    for (int i = 0; i < v1.size(); i++) {
        in << v1.at(i) << endl;
    }
//----------------------------------------------------------------------------------
//����4 �α��� ���� �� ��ȭ��ȣ �����ϱ�



















    
}