#include <iostream>
#include <string>
#include <fstream> //������ �а�, �� �� �ֵ��� ���� ����� �����ϴ� ���
#include <vector>
using namespace std;

int main()
{//������ �̿��� �ǽ� 2 Ǯ��
	//[//--------------ȸ�� ���� ���� �Է��� ���-----------------------}
	//[int x;															}
	//[cin >> x;														}
	//[for (int i = 0; i < x; i++) {									}
	//[//--------------ȸ�� ���� ������� �𸣰� ��� ���� ��-----------}
	//[int x = 1;														}
	//[while (x != 0){ }												}
	//[������ �Է��ϰ�, �ٳ�������쿡 0�� �Է��ϸ� ����				}
	//[-----------------------------------------------------------------}

	////--------------ȸ�� ���� ������ ���� ��---------------------------
//	ofstream member("�ǽ�2.txt"); 
//	//������ �Է��ϱ�
//	cout <<"3���� ȸ���� ���� �̸�, ��й�ȣ�� ���������� �Է��ϼ���.\n";
//	for (int i = 0; i < 3; i++) {
//		cout << i + 1 << "��° ȸ�� : ";
//		string pin;
//		getline(cin, pin);//cin ������ info�̶�� ������ ����)
//
//		if (member.is_open()) member << pin << endl;
//		//member���ٰ� �߰��Ͽ� ������ �Է��Ѵ�.
//	}
//	member.close();
//
//	ifstream member_read("�ǽ�2.txt");
//	//������ �ҷ�����
//	string line;
//	if (member_read.is_open()) {
//		while (getline(member_read, line)) {
//			cout << line << endl;
//		}
//	}
//	member_read.close();

//�ǽ�3 ȸ�� ��θ� ������ �α����ϱ�.
	ifstream member("�ǽ�2.txt");
	string name, pw, name_in, pw_in;

	cout << "�̸��� �Է��ϼ���: ";
	cin >> name_in;

	cout << "��й�ȣ�� �Է��ϼ���: ";
	cin >> pw_in;

	bool is_login = false; //bool�Լ�(is_login_�� false�� �ʱ�ȭ �Ѵ�.

	if (member.is_open()) {
		while (member >> name >> pw) //member name pw
		{
			if (name_in == name && pw_in == pw) {
				is_login = true;
				break;
			}
		}

		if (is_login) {
			string tel_in, tel;
			cout << "�α��� ����" << endl;
			cout << "��ȭ��ȣ�� �Է��ϼ���. ";
			cin >> tel_in;

			ifstream member_tel_r("member_tel.txt");
			string member_tel_temp = "";

			bool is_modify = false; // ���� ���� ���� or �߰��� �Ǵ��ϴ� ����

			if (member_tel_r.is_open()) {
				while (member_tel_r >> name >> tel) {
					string line = name;
					if (name == name_in)
					{
						line += tel_in;
						is_modify = true;
					}
					else line += tel;
					member_tel_temp += line + "\n";
				}
				member_tel_r.close();
			}

			ofstream member_tel_w;

			if (is_modify)
			{
				member_tel_w.open("member_tel.txt");
				member_tel_w << member_tel_temp;
			}
			else
			{
				member_tel_w.open("member_tel.txt", ios::app);//�ʱ�ȭ�����ʰ� �����Ҽ��ִ°�
				member_tel_w << name_in +tel_in + "\n";
			}
			member_tel_w.close();
		}
		else cout << "�α��� ����";
	}	
	else cout << "������ ���� ���Ͽ����ϴ�.\n";
	member.close();
}


















