#include <iostream>
using namespace std;

class Character
{
	string name;
	int level = 1;
	int offensive_power = 20;
	int monster_HP = 50;
	int exp = 0;
	int HP = 100;
public:
	Character(string name)
	{
		this->name = name;
	}
	void attack()
	{
		cout << "몬스터를 공격했습니다. (공격력 : " << offensive_power << ")" << endl;
		monster_HP -= offensive_power;
		if (monster_HP <= 0)
		{
			exp += 100;
			cout << "몬스터 처치!! (Exp : " << exp << "/200)" << endl;
			if (exp >= 200)
			{
				level_up();
				cout << "레벨 업! (현재 레벨 : " << level << " )" << endl;
				exp = 0;
			}
		}
		else
		{
			cout << "몬스터 체력 (" << monster_HP << "/50)" << endl;
			HP -= 10;
			cout << "몬스터에게 공격 당했습니다. (HP:" << HP << "/100)" << endl;
		}
	}
	void HP_potion()
	{
		if (HP == 100) { cout << "체력이 꽉 찼습니다." << endl; }
		else if (HP > 80)
		{
			HP = 100;
			cout << "HP가 회복되었습니다. (현재 HP : " << HP << ")" << endl;
		}
		else
		{
			HP += 20;
			cout << "HP가 회복되었습니다. (현재 HP : " << HP << ")" << endl;
		}
	}
	void setName(string name)
	{
		this->name = name;
		cout << "▶모험가 이름이 " << this->name << "(으)로 변경되었습니다." << endl;
	}
	void level_up()
	{
		level++;
		cout << "Level Up!! -> 공격력 +10 (레벨 : " << level << ")" << endl;
		offensive_power += 10;
		exp = 0;//경험치 초기화
	}
	void information()
	{
		cout << "이름 : " << name << endl;
		cout <<"레벨 : " <<level << endl;
		cout <<"공격력 : " << offensive_power << endl;
		cout <<"체력 : "<<HP << endl;
		cout <<"경험치 : "<< exp << endl;
	}
};

int main()
{
	string name;
	cout << "*******************************************" << endl;
	cout << "▶모험가의 이름을 입력해주세요 : ";
	cin >> name;
	Character c1(name);
	cout << "*******************************************" << endl;
	cout << name << "님 다음 행동을 골라주세요." << endl;
	cout << "▶1. 모험가 이름 변경" << endl;
	cout << "▶2. 몬스터 공격하기" << endl;
	cout << "▶3. 모험가 레벨업" << endl;
	cout << "▶4. HP물약 사용하기" << endl;
	cout << "▶5. Information" << endl << endl;

	while (true)
	{
		char motion_in;
		cout << "Q. 어떤 동작을 실행하시겠습니까? (0:종료) : ";
		cin >> motion_in;
		switch (motion_in)
		{
		case '0':
			cout << "게임 종료" << endl;
			return 0;
		case '1':
			cout << "▶새로운 모험가의 닉네임을 입력해주세요 : ";
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
			cout << "0~4 중에서 골라주세요. " << endl;
		}
	}
}