#include <iostream>
using namespace std;

class Character //��ü ���¿� ������ ������.
{
	string name;
	int level;
	int item;

public:    //���� ������ (������ ����)
	Character(string name)//������(�޼ҵ�):��ü�� ������ �� �ڵ����� ȣ��Ǵ� �޼ҵ�
	{
		this->name = name;
		level = 0;
		item = 1;
	}

	string getName() { //������ ��ȯ���ִ� �޼ҵ�
		return name;
	}

	string name_in(string name_in)
	{
		cout << "�����谡 �г����� " << name_in << "�Դϴ�." << endl;
		return name_in;
	}

	void setName(string name) {    //������ ���� �Ҵ����ִ� �޼ҵ�
		this->name = name;
	}

	void level_up() //�޼ҵ� : Ŭ���� ���� ����� �Լ�
	{
		level++;
		cout << "�����谡�� ������ �����߽��ϴ�." << endl;
		cout << "������ ���谡 level : " << level << endl;
	}
	//int item_up(int item) //�޼ҵ� : Ŭ���� ���� ����� �Լ�
	//{
	//	item++;
	//	cout << "��Nick���� �������� ȹ���߽��ϴ�." << endl;
	//	cout << "������ ������ ���� : " << item << endl;
	//	return item;
		//}
		//int item_down(int item) //�޼ҵ� : Ŭ���� ���� ����� �Լ�
		//{
		//	item--;
		//	cout << "��sarah���� �������� ������ϴ�." << endl;
		//	cout << "������ ������ ���� : " << item << endl;
		//	return item;
		//}
		//void info() //�޼ҵ� : Ŭ���� ���� ����� �Լ�
		//{
		//	cout << "< Infomation >" << endl;
		//	//cout << "��name : " << name <<endl;
		//	cout << "��level : " << level << endl;
		//	cout << "��item : " << item << endl;
		//}
	};

	int main()
	{
		string name_in;

		cout << "-------------------------------------------" << endl;
		cout << "���谡�� �г����� �Է����ּ��� : ";
		cin >> name_in;
		cout << "------------------------------------------" << endl;


		int motion_in = 1;
		int level = 1;
		int item = 1;
		string name_new;

		Character char1(name_in);
		char1.name_in(name_in);

		while (motion_in != 0) {
			cout << "� ������ �����Ͻðڽ��ϱ�? (0:����) : ";
			cin >> motion_in;


			if (motion_in == 1)
			{
				cout << "���ο� ���谡�� �г����� �Է����ּ��� : ";
				cin >> name_new;
				char1.setName(name_new);
				cout << "�����ο� ���谡�� �г����� " << char1.getName() << "�Դϴ�." << endl;
			}
			else if (motion_in == 2)
			{

				char1.level_up();
			}
			//else if (motion_in == 3)
			//{
			//	char1.item_up();
			//}
			/*
			else if (motion_in == 4)
			{
				Character char1(name_in, level, item);
				char1.item_down(item);
			}
			else if (motion_in == 5)
			{
				Character char1(name_in, level, item);
				char1.info();
			}
			else cout << "�� 1-5 �߿��� �Է����ּ���. " << endl;

		}*/
		}
	}