#include <iostream>
#include <string>
#include <fstream> //������ �а�, �� �� �ֵ��� ���� ����� �����ϴ� ���
#include <vector>
using namespace std;

int main()
{
	//	ifstream member("�ǽ�2.txt");
	//	string name, pin, name_in, pin_in;
	//
	//	cout << "�̸��� �Է��ϼ��� : ";
	//	cin >> name;
	//	cout << "��й�ȣ�� �Է��ϼ��� : ";
	//	cin >> pin;
	//
	//	bool is_login = false;
	//
	//	if (member.is_open())
	//	{
	//		while (member >> name >> pin);
	//		{
	//			if(name_in == name&&pin_in==pin)
	//			{
	//				is_login = true;
	//				break;
	//			}
	//		}
	//	}
	//	if (is_login) 
	//	{
	//		string num, num_in;
	//		cout << "�α��μ���" << endl;
	//		cout << "��ȭ��ȣ�� �Է��ϼ��� :";
	//		cin >> num;
	//
	//	ifstream member_tel("member_tel.txt");
	//	bool is_modify = false;
	//	string namenum;
	//
	//	if (member_tel.is_open())
	//	{
	//		string namenum;
	//		while (member_tel >> name >> num)
	//		{			
	//			if (name == name_in)//�̸��� ���� ���� �� ��ȣ�� ����
	//			{
	//				namenum = name + num_in;
	//				is_modify = true;
	//			}
	//			else                //�̸��� ���� �� �߰��ϱ�
	//			{
	//				namenum = name + num + "\n";
	//			}		
	//			member_tel.close();
	//		}
	//	}
	//	
	//	ofstream member_tel_write;
	//
	//	if (is_modify)
	//	{
	//		member_tel_write.open("member_tel.txt");
	//		member_tel_write << namenum;
	//	}
	//	else
	//	{
	//		member_tel_write.open("member_tel.txt",ios::);
	string name, pin, name_in, pin_in;
	cout << "�̸� : ";
	cin >> name;
	cout << "��� : ";
	cin >> pin;

	ifstream member("�ǽ�2.txt");//�ǽ�2�� ������ member�� �Űܴ�´�
	bool is_login = false;

	if (member.is_open())//member�� ���� �ִٸ�
	{
		while (member >> name_in >> pin_in)
		{
			if (name == name_in && pin == pin_in)
			{
				is_login = true;
				break;
			}
		}
	}
	member.close();

	
	if (is_login)
	{
		string num, num_in;
		cout << "�α��μ���" << endl;
		cout << "��ȭ��ȣ : ";
		cin >> num;

		ifstream tel("member_tel.txt");
		string tmp = "";
		string line = name_in + " "; //��浿 + " " 

		bool is_modify = false; // ���� ���� ���� or �߰��� �Ǵ��ϴ� ����

		if (tel.is_open())
		{
			while (tel >> name_in >> num_in)//�������� �߰��ؼ� ���� �������� �����ۼ��Ѵ�.
			{
				string line = name_in + " ";
				if (name == name_in) //�̸��� ���ٸ� �����Է¹��� ��ȭ��ȣ�� �Է�
				{					
					is_modify = true;
					line += num;
				}
				else
				{
					line += num_in;//���� �ִ� ��ȭ��ȣ�� �߰�
				}
				tmp += line + "\n"; //��浿 + " " +01091118111
			}
			tel.close();
		}
		

		ofstream modify;
		if (is_modify)//������ ���� ��
		{
			modify.open("member_tel.txt");
			modify << tmp;
		}
		else // ������ ������ ��
		{
			modify.open("member_tel.txt", ios::app);
			modify << name + " " + num;
		}
		modify.close();

	}
	else cout << "�α��� ����";
}










