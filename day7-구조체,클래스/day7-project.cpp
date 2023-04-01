#include <iostream>
using namespace std;

class Character //객체 상태와 동작을 가진다.
{
	string name;
	int level = 0;
	int item_num = 0;
	int hp = 100;
	int hp_item = 5;
	int mon_hp = 100;

public:    //접근 제어자 (상태의 개념)
	Character(string name)//생성자(메소드):객체가 생성될 때 자동으로 호출되는 메소드
	{
		this->name = name;
		cout << "▶모험가 닉네임은 " << name << "입니다." << endl;
	}
	void setName(string name) //변수를 반환해주는 세터메소드
	{ //모험가 닉네임 변경
		this->name = name;
		cout << "▶모험가 닉네임은 " << this->name << "입니다." << endl;
	}
	void level_up() //메소드 : 클래스 내에 선언된 함수
	{//모험가 레벨증가
		level++;
		cout << "▶모험가의 레벨이 증가했습니다." << endl;
		cout << "▶현재 모험가 level : " << level << endl;
	}
	void item_up() //메소드 : 클래스 내에 선언된 함수
	{//모험가 시야확장 아이템 획득
		item_num++;
		cout << "▶Nick에게 아이템을 획득했습니다." << endl;
		cout << "▶현재 아이템 개수 : " << item_num << endl;
	}
	void item_down() //메소드 : 클래스 내에 선언된 함수
	{//모험가 시야확장 아이템 사용
		if (item_num < 1)
		{
			cout << "▶아이템이 없습니다." << endl;
			return;
		}
		item_num--;
		cout << "▶아이템을 사용하여 시야를 밝힙니다." << endl;
		cout << "▶현재 아이템 개수 : " << item_num << endl;
	}
	void hp_up()
	{//모험가 체력회복 아이템 사용
		if (item_num < 1)
		{
			cout << "▶아이템이 없습니다." << endl;
			return;
			hp += 10;
			hp_item--;
			cout << "▶포션을 먹었습니다." << endl;
			cout << "▶현재 HP : " << hp << endl;
			cout << "▶남은 포션 갯수 : " << hp_item << endl;
		}
	}
	void info() //메소드 : 클래스 내에 선언된 함수
	{
		cout << "< Infomation >" << endl;
		cout << "▶name : " << name << endl;
		cout << "▶level : " << level << endl;
		cout << "▶item : " << item_num << endl;
		cout << "▶HP : " << hp << endl;
		cout << "▶HP_item : " << hp_item << endl;
	}
	int attack(int num)
	{
		cout << "▶몬스터를 공격합니다." << endl;
		mon_hp -= num;
		cout << "▶남은 몬스터 체력 : " << mon_hp << endl;
		cout << "▶체력을 10 잃었습니다." << endl;
		cout << "▶남은 체력 : " << hp << endl;
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
		cout << "▶모험가의 닉네임을 입력해주세요 : ";
		cin >> name;
		Character char1(name);
		cout << "*******************************************" << endl << endl;

		cout << "▶1. 모험가 닉네임 변경" << endl;
		cout << "▶2. 모험가 레벨업" << endl;
		cout << "▶3. 시야확장 물약 획득" << endl;
		cout << "▶4. 시야확장 물약 사용" << endl;
		cout << "▶5. 체력회복 물약 사용" << endl;
		cout << "▶6. 몬스터 공격하기" << endl;
		cout << "▶7. 현재 상태창 보기" << endl << endl;

		while (1) {
			int motion_in;
			cout << "Q. 어떤 동작을 실행하시겠습니까? (0:종료) : ";
			cin >> motion_in;

			if (motion_in == 0)
			{
				cout << "▶게임 종료" << endl;
				return -1;
			}
			else if (motion_in == 1)h
			{
				cout << "▶새로운 모험가의 닉네임을 입력해주세요 : ";
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
					cout << "▶게임 승리" << endl;
					return -1;
				}
			}
			else if (motion_in == 7)
			{
				char1.info();
			}
			else cout << "▶ 0-7 중에서 입력해주세요. " << endl;
		}
	}
