#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

class Game //게임 클래스 선언
{
private:
	string name; //유저 닉네임 변수
	vector<int> randNum; //output 벡터
	static int count; //몇 번 도전했는지 카운트

public:
	Game(string name) 
	{ 
		this->name = name;
		random();
	}
	static int getCnt() { return count; }

	//strike 개수 출력 메소드
	int matchStrike(vector<int> numbers)
	{
		int strike = 0;
		for (int i = 0; i < 3; i++)
		{
			if (numbers[i] == randNum[i]) { strike++; }
		return strike;
		}
	}

	//ball 개수 출력 메소드
	int matchBall(vector<int> numbers)
	{
		int ball = 0;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (numbers[i] != randNum[i]&& numbers[i] == randNum[j])
				{
					ball++;
				}
			}
		}
		count++;
		return ball;
	}

	//output 난수 생성 메소드
	void random()
	{
		srand(time(NULL));
		for (int i = 0; i < 3; i++)
		{
			bool flag = true; //난수 중복생성 방지용 BOOL
			int num = (rand() % 9) + 1; //1-9까지의 난수 생성
			for (int j = 0; j < randNum.size(); j++)
			{
				if (num == randNum.at(j))
				{
					flag = false; //중복된 난수 발생
					break;
				}
			}
			if (!flag) { i--; } //중복된 난수는 재추첨
			else { randNum.push_back(num); }
		}

		//결과 확인용 난수 출력부
		cout << "(결과 확인용 난수 출력 : ";
		for (int elem : randNum) { cout << elem << " "; }
		cout << ")"<<endl;
	}
};

int Game::count = 0;

//시작화면 출력부
class MainMenu
{
public:
	MainMenu()
	{
		cout << "\n\n\n\n";
		cout << "\t\t"; cout << "@@@@@@@@        @        @@@@@@   @@@@@@@@     @@@@@@@@        @       @        @        \n";
		cout << "\t\t"; cout << "@       @      @ @      @         @            @       @      @ @      @        @        \n";
		cout << "\t\t"; cout << "@       @     @   @     @         @            @       @     @   @     @        @        \n";
		cout << "\t\t"; cout << "@@@@@@@@     @@@@@@@     @@@@@@   @@@@@@@@     @@@@@@@@     @@@@@@@    @        @        \n";
		cout << "\t\t"; cout << "@       @   @       @          @  @            @       @   @       @   @        @        \n";
		cout << "\t\t"; cout << "@       @  @         @         @  @            @       @  @         @  @        @        \n";
		cout << "\t\t"; cout << "@@@@@@@@  @           @  @@@@@@   @@@@@@@@     @@@@@@@@  @           @ @@@@@@@  @@@@@@@@ \n\n\n\n\n";
		cout << "\t\t"; cout << " \t\t  게임을 시작하려면 아무키나 누르세요.\n\n\n\n\n\n\n";
		getchar();// 아무키 입력 기다림
		system("cls"); // 콘솔 창 clear
	}
};

int main()
{
	//메인화면 출력부
	MainMenu();

	//이름 입력부
	string nameIn; //사용자의 닉네임 입력값
	int numIn;
	cout << "*****************< 숫자 야구 게임 >**********************" << endl;
	cout << "▶휴먼의 닉네임을 입력하시오. : ";
	cin >> nameIn;
	cout << "******************************************************" << endl;
	Game g(nameIn); //클래스 실행과 동시에 난수 생성

	//게임 실행부
	while (1)
	{
		vector<int> numbers;
		cout << "▶1 - 9 사이의 숫자 3개를 입력하시오.(이외의 숫자 : 게임종료)" << endl;
		cout << "▶숫자입력 : ";
		for (int i = 0; i < 3; i++)
		{
			cin >> numIn;
			if (numIn < 1 && numIn>9)
			{
				cout << "▶게임 종료 되었습니다." << endl;
				break;
			}
			numbers.push_back(numIn);
		}
		if (g.matchStrike(numbers) == 3)
		{
			cout << "\n▶게임승리!! 총 " << Game::getCnt() << "회만에 성공하셨습니다." << endl;
			break;
		}
		cout << "▶Strike : " << g.matchStrike(numbers) << "\t▶Ball : " << g.matchBall(numbers) << endl;
	}
	
	return 0;
}
