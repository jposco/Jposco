#include <iostream>
#include <string>
#include <fstream> //������ �а�, �� �� �ֵ��� ���� ����� �����ϴ� ���
#include <vector>
using namespace std;

int main()
{
	ifstream member("�ǽ�2.txt");
	string name, pin, name_in, pin_in;

	cout << "�̸��� �Է��ϼ��� : ";
	cin >> name;
	cout << "��й�ȣ�� �Է��ϼ��� : ";
	cin >> pin;

	bool is_login = false;

	if (member.is_open())
	{
		while (member >> name >> pin);
		{
			if(name_in == name&&pin_in==pin)
			{
				is_login = true;
				break;
			}
		}
	}
	if (is_login) 
	{
		string num, num_in;
		cout << "�α��μ���" << endl;
		cout << "��ȭ��ȣ�� �Է��ϼ��� :";
		cin >> num;

	ifstream member_tel("member_tel.txt");
	bool is_modify = false;
	string namenum;

	if (member_tel.is_open())
	{
		string namenum;
		while (member_tel >> name >> num)
		{			
			if (name == name_in)//�̸��� ���� ���� �� ��ȣ�� ����
			{
				namenum = name + num_in;
				is_modify = true;
			}
			else                //�̸��� ���� �� �߰��ϱ�
			{
				namenum = name + num + "\n";
			}		
			member_tel.close();
		}
	}
	
	ofstream member_tel_write;

	if (is_modify)
	{
		member_tel_write.open("member_tel.txt");
		member_tel_write << namenum;
	}
	else
	{
		member_tel_write.open("member_tel.txt");












}