#include <iostream>
#include <ctime>
using namespace std;

class Game
{
	string name;
	int thirty_one = 0;
public :
	Game(string name)
	{
	this->name = name;
	}
	string getName()
	{
		return name;
	}
	
	int humun(int num_in)
	{
		cout << "▶" << getName() << "님이 부른 숫자는 : " << num_in << endl;
		while (num_in > 3)
		{
			cout << "휴먼... 1-3까지만 입력해주세요.. 다시 입력 : ";
			cin >> num_in;
			cout << "▶" << getName() << "님이 부른 숫자는 : " << num_in << endl;
		}
		for (int i = 0; i < num_in; i++)
		{
			thirty_one++;
			cout << thirty_one << " ";
			if (thirty_one >= 31)
			{
				cout << getName() << "(이)가 31이 되었습니다. AI 승리!";
				return -1;
			}
		}
		cout << endl;
		this->thirty_one = thirty_one;
		ai();
	}

	int ai()
	{
		int next = 0;
		cout << "▶AI가 부른 숫자는 : " << random() << endl;
		for (int i = 0; i < random(); i++)
		{
			thirty_one++;
			cout << thirty_one << " ";
			if (thirty_one >= 31)
			{
				cout << "AI가 31이 되었습니다. " << getName() << " 승리!";
				return -1;
			}
		}
		cout << endl;
		this->thirty_one = thirty_one;
		cout << "다음 숫자를 불러주시오 : ";
		cin >> next;
		humun(next);
	}

	int random()
	{
		srand(time(NULL)); // 난수 생성하기
		int ran_num = (rand() % 3) + 1; //1-3사이의 랜덤숫자 받기
		return ran_num;
	}


};

int main()
{
	srand(time(NULL)); // 난수 생성하기
	int first_in = 0; //선공 후공 정해주는 입력값
	int num_in = 0; //선공일 경우 시작 숫자 입력값
	string name_in; //사용자의 닉네임 입력값

	cout << "***************************************" << endl;
	cout << " AI와 베스킨라빈스 서리원 게임하기 " << endl;
	cout << "▶휴먼의 닉네임을 입력하시오. : ";
	cin >> name_in;
	cout << "**************************************" << endl;
	Game g(name_in);
	cout << "▶1. 선공   ▶2. 후공  : " ;

	cin >> first_in;
	if (first_in == 1) //선공 선택시 숫자입력
	{
		cout << g.getName() << "님 먼저 숫자를 부르시오!: ";
		cin >> num_in;
		g.humun(num_in);
	}
	else if (first_in == 2) //후공 선택시
	{
		cout << "AI가 먼저 숫자를 부릅니다 !!!" <<endl; 
		g.ai();
	}
	else cout << "1 or 2 중에 고르세요 휴먼^^" << endl;

	return 0;
}