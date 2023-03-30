#include <iostream>
using namespace std;

class Character //객체 상태와 동작을 가진다.
{
	string name;
	int level;
	int item;

public:    //접근 제어자 (상태의 개념)
	Character(string name)//생성자(메소드):객체가 생성될 때 자동으로 호출되는 메소드
	{
		this->name = name;
		level = 0;
		item = 1;
	}

	string getName() { //변수를 반환해주는 메소드
		return name;
	}

	string name_in(string name_in)
	{
		cout << "▶모험가 닉네임은 " << name_in << "입니다." << endl;
		return name_in;
	}

	void setName(string name) {    //변수에 값을 할당해주는 메소드
		this->name = name;
	}

	void level_up() //메소드 : 클래스 내에 선언된 함수
	{
		level++;
		cout << "▶모험가의 레벨이 증가했습니다." << endl;
		cout << "▶현재 모험가 level : " << level << endl;
	}
	//int item_up(int item) //메소드 : 클래스 내에 선언된 함수
	//{
	//	item++;
	//	cout << "▶Nick에게 아이템을 획득했습니다." << endl;
	//	cout << "▶현재 아이템 개수 : " << item << endl;
	//	return item;
		//}
		//int item_down(int item) //메소드 : 클래스 내에 선언된 함수
		//{
		//	item--;
		//	cout << "▶sarah에게 아이템을 뺏겼습니다." << endl;
		//	cout << "▶현재 아이템 개수 : " << item << endl;
		//	return item;
		//}
		//void info() //메소드 : 클래스 내에 선언된 함수
		//{
		//	cout << "< Infomation >" << endl;
		//	//cout << "▶name : " << name <<endl;
		//	cout << "▶level : " << level << endl;
		//	cout << "▶item : " << item << endl;
		//}
	};

	int main()
	{
		string name_in;

		cout << "-------------------------------------------" << endl;
		cout << "모험가의 닉네임을 입력해주세요 : ";
		cin >> name_in;
		cout << "------------------------------------------" << endl;


		int motion_in = 1;
		int level = 1;
		int item = 1;
		string name_new;

		Character char1(name_in);
		char1.name_in(name_in);

		while (motion_in != 0) {
			cout << "어떤 동작을 실행하시겠습니까? (0:종료) : ";
			cin >> motion_in;


			if (motion_in == 1)
			{
				cout << "새로운 모험가의 닉네임을 입력해주세요 : ";
				cin >> name_new;
				char1.setName(name_new);
				cout << "▶새로운 모험가의 닉네임은 " << char1.getName() << "입니다." << endl;
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
			else cout << "▶ 1-5 중에서 입력해주세요. " << endl;

		}*/
		}
	}