#include <iostream>
using namespace std;

class Character
{
protected:
	string name;
	int level = 1;
	int monster_HP = 50;
	int exp = 0; //경험치
	int offensive_power; //공격력
	int full_HP; //최대체력 (직업비례)
	int Current_HP = full_HP; //현재체력
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
		cout << "▶몬스터를 공격했습니다. (공격력 : " << offensive_power << ")" << endl;
		monster_HP -= offensive_power;
		if (monster_HP <= 0)
		{
			exp += 100;
			cout << "▶몬스터 처치!! (Exp : " << exp << "/200)" << endl;
			if (exp >= 200)
			{
				level_up();
				cout << "▶레벨 업! (현재 레벨 : " << level << " )" << endl;
				exp = 0;
			}
		}
		else
		{
			cout << "▶몬스터 체력 (" << monster_HP << "/50)" << endl;
			Current_HP -= 10;
			cout << "▶몬스터에게 공격 당했습니다. (HP:" << Current_HP << "/" << full_HP << ")" << endl;
		}
	}
	void HP_potion()
	{
		if (Current_HP == full_HP) { cout << "▶체력이 꽉 찼습니다." << endl; }
		else if (Current_HP > full_HP - 20)
		{
			Current_HP = full_HP;// +20보다 작은 +10도 회복될 수 있도록,
			cout << "▶HP가 회복되었습니다. (현재 HP : " << Current_HP << ")" << endl;
		}
		else
		{
			Current_HP += 20;
			cout << "▶HP가 회복되었습니다. (현재 HP : " << Current_HP << ")" << endl;
		}
	}
	void setName(string name) //setter를 이용한 이름 변경하기
	{
		this->name = name;
		cout << "▶모험가 이름이 " << this->name << "(으)로 변경되었습니다." << endl;
	}
	void level_up()
	{
		level++;
		cout << "▶Level Up!! -> 공격력 +10 (레벨 : " << level << ")" << endl;
		offensive_power += 10;
		exp = 0;//경험치 초기화
	}
	void information()
	{
		cout << "이름 : " << name << endl;
		cout << "레벨 : " << level << endl;
		cout << "공격력 : " << offensive_power << endl;
		cout << "체력 : " << Current_HP << endl;
		cout << "경험치 : " << exp << endl;
	}
};

class Gunman : public Character //무기별 공격력 및 체력 설정하기
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
		cout << "Q. 모험가의 이름을 입력해주세요 : ";
		cin >> name;
		cout << endl<<  "▶1. 거너 (공격력 : 30, 체력 : 100)" << endl;
		cout << "▶2. 검사 (공격력 : 20, 체력 : 150)" << endl;
		cout << "▶3. 마법사 (공격력 : 50, 체력 : 50)" << endl;
		cout << "▶0 : 게임종료" << endl;
		cout << "Q. 직업을 선택해주세요.";
		while (1)
		{
			cin >> job;
			if (job == 1)
			{
				cout << "거너로 전직 되었습니다. (무기 : 총)" << endl;
				attack = 30;
				hp = 100;
				break;
			}
			else if (job == 2)
			{
				cout << "검사로 전직 되었습니다. (무기 : 검)" << endl;
				attack = 20;
				hp = 150;
				break;
			}
			else if (job == 3)
			{
				cout << "마법사로 전직 되었습니다. (무기 : 마법)" << endl;
				attack = 50;
				hp = 50;
				break;
			}
			else { cout << "▶1-4 중에 선택해주세요"; }
		}
		cout << "*******************************************" << endl;
		Character c1= Gunman(name);
		cout << endl<< "< 다음 동작을 골라주세요. >" << endl;
		cout << "▶1. Rename" << endl;
		cout << "▶2. Attacking a Monster" << endl;
		cout << "▶3. Level up" << endl;
		cout << "▶4. HP Recovery" << endl;
		cout << "▶5. Information" << endl << endl;
		while (true)
		{
			char motion_in;
			cout << "Q. 어떤 동작을 실행하시겠습니까? (0:종료) : ";
			cin >> motion_in;
			switch (motion_in)
			{
			case '0':
				cout << "▶게임종료" << endl;
				return 0;
			case '1':
				cout << "Q. 새로운 모험가의 닉네임을 입력해주세요 : ";
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
				cout << "▶0~4 중에서 골라주세요. " << endl;
			}
		}
	}
}