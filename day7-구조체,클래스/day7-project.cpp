#include <iostream>
using namespace std;

class Character //��ü ���¿� ������ ������.
{
	string name;
	int level = 0;
	int item_num = 0;
	int hp = 100;
	int hp_item = 5;
	int mon_hp = 100;

public:    //���� ������ (������ ����)
	Character(string name)//������(�޼ҵ�):��ü�� ������ �� �ڵ����� ȣ��Ǵ� �޼ҵ�
	{
		this->name = name;
		cout << "�����谡 �г����� " << name << "�Դϴ�." << endl;
	}
	void setName(string name) //������ ��ȯ���ִ� ���͸޼ҵ�
	{ //���谡 �г��� ����
		this->name = name;
		cout << "�����谡 �г����� " << this->name << "�Դϴ�." << endl;
	}
	void level_up() //�޼ҵ� : Ŭ���� ���� ����� �Լ�
	{//���谡 ��������
		level++;
		cout << "�����谡�� ������ �����߽��ϴ�." << endl;
		cout << "������ ���谡 level : " << level << endl;
	}
	void item_up() //�޼ҵ� : Ŭ���� ���� ����� �Լ�
	{//���谡 �þ�Ȯ�� ������ ȹ��
		item_num++;
		cout << "��Nick���� �������� ȹ���߽��ϴ�." << endl;
		cout << "������ ������ ���� : " << item_num << endl;
	}
	void item_down() //�޼ҵ� : Ŭ���� ���� ����� �Լ�
	{//���谡 �þ�Ȯ�� ������ ���
		if (item_num < 1)
		{
			cout << "���������� �����ϴ�." << endl;
			return;
		}
		item_num--;
		cout << "���������� ����Ͽ� �þ߸� �����ϴ�." << endl;
		cout << "������ ������ ���� : " << item_num << endl;
	}
	void hp_up()
	{//���谡 ü��ȸ�� ������ ���
		if (item_num < 1)
		{
			cout << "���������� �����ϴ�." << endl;
			return;
			hp += 10;
			hp_item--;
			cout << "�������� �Ծ����ϴ�." << endl;
			cout << "������ HP : " << hp << endl;
			cout << "������ ���� ���� : " << hp_item << endl;
		}
	}
	void info() //�޼ҵ� : Ŭ���� ���� ����� �Լ�
	{
		cout << "< Infomation >" << endl;
		cout << "��name : " << name << endl;
		cout << "��level : " << level << endl;
		cout << "��item : " << item_num << endl;
		cout << "��HP : " << hp << endl;
		cout << "��HP_item : " << hp_item << endl;
	}
	int attack(int num)
	{
		cout << "�����͸� �����մϴ�." << endl;
		mon_hp -= num;
		cout << "������ ���� ü�� : " << mon_hp << endl;
		cout << "��ü���� 10 �Ҿ����ϴ�." << endl;
		cout << "������ ü�� : " << hp << endl;
		if (mon_hp == 0)
		{
			int end;
			end = 0;
			return end;
		}
	}
};

	int main()
	{
		string name;
		cout << "*******************************************" << endl;
		cout << "�����谡�� �г����� �Է����ּ��� : ";
		cin >> name;
		Character char1(name);
		cout << "*******************************************" << endl << endl;

		cout << "��1. ���谡 �г��� ����" << endl;
		cout << "��2. ���谡 ������" << endl;
		cout << "��3. �þ�Ȯ�� ���� ȹ��" << endl;
		cout << "��4. �þ�Ȯ�� ���� ���" << endl;
		cout << "��5. ü��ȸ�� ���� ���" << endl;
		cout << "��6. ���� �����ϱ�" << endl;
		cout << "��7. ���� ����â ����" << endl << endl;

		while (1) {
			int motion_in;
			cout << "Q. � ������ �����Ͻðڽ��ϱ�? (0:����) : ";
			cin >> motion_in;

			if (motion_in == 0)
			{
				cout << "������ ����" << endl;
				return -1;
			}
			else if (motion_in == 1)h
			{
				cout << "�����ο� ���谡�� �г����� �Է����ּ��� : ";
				cin >> name;
				char1.setName(name);
			}
			else if (motion_in == 2)
			{
				char1.level_up();
			}
			else if (motion_in == 3)
			{
				char1.item_up();
			}
			else if (motion_in == 4)
			{
				char1.item_down();
			}
			else if (motion_in == 5)
			{
				char1.hp_up();
			}
			else if (motion_in == 6)
			{
				int a = char1.attack(10);
				if (a == 0)
				{
					cout << "������ �¸�" << endl;
					return -1;
				}
			}
			else if (motion_in == 7)
			{
				char1.info();
			}
			else cout << "�� 0-7 �߿��� �Է����ּ���. " << endl;
		}
	}
