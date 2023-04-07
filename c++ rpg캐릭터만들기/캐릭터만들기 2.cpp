#include <iostream>
using namespace std;

class Character
{
protected:
	string name;
	int level = 1;
	int monster_HP = 50;
	int exp = 0; //����ġ
	int offensive_power; //���ݷ�
	int full_HP; //�ִ�ü�� (�������)
	int Current_HP = full_HP; //����ü��
public:
	Character(string name, int offensive_power, int full_HP)
	{
		this->name = name;
		this->offensive_power = offensive_power;
		this->full_HP = full_HP;
		this->Current_HP = full_HP;
	}
	void attack()
	{
		cout << "�����͸� �����߽��ϴ�. (���ݷ� : " << offensive_power << ")" << endl;
		monster_HP -= offensive_power;
		if (monster_HP <= 0)
		{
			exp += 100;
			cout << "������ óġ!! (Exp : " << exp << "/200)" << endl;
			if (exp >= 200)
			{
				level_up();
				cout << "������ ��! (���� ���� : " << level << " )" << endl;
				exp = 0;
			}
		}
		else
		{
			cout << "������ ü�� (" << monster_HP << "/50)" << endl;
			Current_HP -= 10;
			cout << "�����Ϳ��� ���� ���߽��ϴ�. (HP:" << Current_HP << "/" << full_HP << ")" << endl;
		}
	}
	void HP_potion()
	{
		if (Current_HP == full_HP) { cout << "��ü���� �� á���ϴ�." << endl; }
		else if (Current_HP > full_HP - 20)
		{
			Current_HP = full_HP;// +20���� ���� +10�� ȸ���� �� �ֵ���,
			cout << "��HP�� ȸ���Ǿ����ϴ�. (���� HP : " << Current_HP << ")" << endl;
		}
		else
		{
			Current_HP += 20;
			cout << "��HP�� ȸ���Ǿ����ϴ�. (���� HP : " << Current_HP << ")" << endl;
		}
	}
	void setName(string name) //setter�� �̿��� �̸� �����ϱ�
	{
		this->name = name;
		cout << "�����谡 �̸��� " << this->name << "(��)�� ����Ǿ����ϴ�." << endl;
	}
	void level_up()
	{
		level++;
		cout << "��Level Up!! -> ���ݷ� +10 (���� : " << level << ")" << endl;
		offensive_power += 10;
		exp = 0;//����ġ �ʱ�ȭ
	}
	void information()
	{
		cout << "�̸� : " << name << endl;
		cout << "���� : " << level << endl;
		cout << "���ݷ� : " << offensive_power << endl;
		cout << "ü�� : " << Current_HP << endl;
		cout << "����ġ : " << exp << endl;
	}
};

class Gunman : public Character //���⺰ ���ݷ� �� ü�� �����ϱ�
{
	int gunmanOffensive_power=30;
	int gunmanFull_HP=100;
public:
	Weapon(string name) : Character(name, gunmanOffensive_power, gunmanFull_HP)
	{
		this->name = name;
		Current_HP = full_HP;
	}
};
int main()
{
	string name;
	int job, attack, hp;

	while (1)
	{
		cout << "*******************************************" << endl;
		cout << "Q. ���谡�� �̸��� �Է����ּ��� : ";
		cin >> name;
		cout << endl<<  "��1. �ų� (���ݷ� : 30, ü�� : 100)" << endl;
		cout << "��2. �˻� (���ݷ� : 20, ü�� : 150)" << endl;
		cout << "��3. ������ (���ݷ� : 50, ü�� : 50)" << endl;
		cout << "��0 : ��������" << endl;
		cout << "Q. ������ �������ּ���.";
		while (1)
		{
			cin >> job;
			if (job == 1)
			{
				cout << "�ųʷ� ���� �Ǿ����ϴ�. (���� : ��)" << endl;
				attack = 30;
				hp = 100;
				break;
			}
			else if (job == 2)
			{
				cout << "�˻�� ���� �Ǿ����ϴ�. (���� : ��)" << endl;
				attack = 20;
				hp = 150;
				break;
			}
			else if (job == 3)
			{
				cout << "������� ���� �Ǿ����ϴ�. (���� : ����)" << endl;
				attack = 50;
				hp = 50;
				break;
			}
			else { cout << "��1-4 �߿� �������ּ���"; }
		}
		cout << "*******************************************" << endl;
		Character c1= Gunman(name);
		cout << endl<< "< ���� ������ ����ּ���. >" << endl;
		cout << "��1. Rename" << endl;
		cout << "��2. Attacking a Monster" << endl;
		cout << "��3. Level up" << endl;
		cout << "��4. HP Recovery" << endl;
		cout << "��5. Information" << endl << endl;
		while (true)
		{
			char motion_in;
			cout << "Q. � ������ �����Ͻðڽ��ϱ�? (0:����) : ";
			cin >> motion_in;
			switch (motion_in)
			{
			case '0':
				cout << "����������" << endl;
				return 0;
			case '1':
				cout << "Q. ���ο� ���谡�� �г����� �Է����ּ��� : ";
				cin >> name;
				c1.setName(name);
				break;
			case '2':
				c1.attack();
				break;
			case '3':
				c1.level_up();
				break;
			case '4':
				c1.HP_potion();
				break;
			case '5':
				c1.information();
				break;
			default:
				cout << "��0~4 �߿��� ����ּ���. " << endl;
			}
		}
	}
}