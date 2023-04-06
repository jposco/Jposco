#include <iostream>
#include <ctime>
using namespace std;

class CGame
{
private:
	string name;
	int thirty_one = 0;
	int next = 0;

	int random() //AI가 부를 랜덤숫자 생성
	{
		srand(time(NULL)); // 난수 생성하기
		int ran_num = (rand() % 3) + 1; //1-3사이의 랜덤숫자 받기
		return ran_num;
	}

public:
	CGame(string name) //사용자 닉네임 입력
	{
		this->name = name;
	}
	string getName() //이름 출력값
	{
		return name;
	}

	void firstgame(int first_in)
	{
		if (first_in == 1) //선공 선택시 선공 숫자입력
		{
			cout << getName() << "님 먼저 숫자를 부르시오!: ";
			int num_in;
			cin >> num_in;
			humun(num_in);
		}
		else //후공 선택시
		{
			cout << "AI가 먼저 숫자를 부릅니다 !!!" << endl;
			ai();
		}
	}

	int humun(int num_in) //휴먼차례
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
				cout << endl << "****▶" << getName() << "(이)가 31이 되었습니다. AI 승리!****";
				return -1;
			}
		}
		cout << endl;
		this->thirty_one = thirty_one;
		ai();
	}

	int ai() // AI차례
	{
		cout << "▶AI가 부른 숫자는 : " << random() << endl;
		for (int i = 0; i < random(); i++)
		{
			thirty_one++;
			cout << thirty_one << " ";
			if (thirty_one >= 31)
			{
				cout << endl << "****▶AI가 31이 되었습니다. " << getName() << " 승리!****";
				return -1;
			}
		}
		cout << endl;
		this->thirty_one = thirty_one;
		cout << "---다음 숫자를 불러주시오 : ";
		cin >> next;
		humun(next);
	}
};

class MainMenu {
public:
	MainMenu() {
		cout << "\n\n\n\n";
		cout << "\t\t"; cout << "@@@@@@@@       @        @@@@@@@@  @  @    @@@    @  \n";
		cout << "\t\t"; cout << "       @     @ @              @   @  @   @   @   @  \n";
		cout << "\t\t"; cout << "       @    @  @             @    @  @   @   @   @  \n";
		cout << "\t\t"; cout << "@@@@@@@@       @            @  @@@@  @    @@@    @  \n";
		cout << "\t\t"; cout << "       @       @           @      @  @     @@@@@@@  \n";
		cout << "\t\t"; cout << "       @       @          @       @  @     @     @  \n";
		cout << "\t\t"; cout << "@@@@@@@@    @@@@@@@      @        @  @     @@@@@@@  \n\n\n\n\n";
		cout << "\t\t"; cout << "   게임을 시작하려면 아무키나 누르세요.\n\n\n\n\n\n\n";
		getchar(); // 아무키 입력 기다림
		system("cls"); // 콘솔 창 clear
	}
};

int main()
{
	MainMenu();
	string name_in; //사용자의 닉네임 입력값
	int first_in = 0; //선공 후공 정해주는 입력값
	int num_in = 0; //선공일 경우 입력값

	cout << "*****************< AI vs humun >**********************" << endl;
	//cout << " AI와 베스킨라빈스 서리원 게임하기 " << endl;
	cout << "▶휴먼의 닉네임을 입력하시오. : ";
	cin >> name_in;
	cout << "******************************************************" << endl;
	CGame g(name_in);

	cout << "▶1. 선공   ▶2. 후공 : ";
	cin >> first_in;

	while (first_in > 2)
	{
		cout << "1 or 2 중에 고르세요 휴먼^^" << endl;
		cin >> first_in;
	}
	g.firstgame(first_in);

	return 0;
}