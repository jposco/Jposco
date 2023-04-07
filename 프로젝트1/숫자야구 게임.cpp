#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

class Game //���� Ŭ���� ����
{
private:
	string name; //���� �г��� ����
	vector<int> randNum; //output ����
	static int count; //�� �� �����ߴ��� ī��Ʈ

public:
	Game(string name)
	{
		this->name = name;
		random();
	}
	static int getCnt() { return count; }

	//strike ���� ��� �޼ҵ�
	int matchStrike(vector<int> numbers)
	{
		int strike = 0;
		for (int i = 0; i < 3; i++)
		{
			if (numbers[i] == randNum[i]) { strike++; }
			return strike;
		}
	}

	//ball ���� ��� �޼ҵ�
	int matchBall(vector<int> numbers)
	{
		int ball = 0;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (numbers[i] != randNum[i] && numbers[i] == randNum[j])
				{
					ball++;
				}
			}
		}
		count++;
		return ball;
	}

	//output ���� ���� �޼ҵ�
	void random()
	{
		srand(time(NULL));
		for (int i = 0; i < 3; i++)
		{
			bool flag = true; //���� �ߺ����� ������ BOOL
			int num = (rand() % 9) + 1; //1-9������ ���� ����
			for (int j = 0; j < randNum.size(); j++)
			{
				if (num == randNum.at(j))
				{
					flag = false; //�ߺ��� ���� �߻�
					break;
				}
			}
			if (!flag) { i--; } //�ߺ��� ������ ����÷
			else { randNum.push_back(num); }
		}

		//��� Ȯ�ο� ���� ��º�
		cout << "(��� Ȯ�ο� ���� ��� : ";
		for (int elem : randNum) { cout << elem << " "; }
		cout << ")" << endl;
	}
};

int Game::count = 0;

//����ȭ�� ��º�
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
		cout << "\t\t"; cout << " \t\t  ������ �����Ϸ��� �ƹ�Ű�� ��������.\n\n\n\n\n\n\n";
		getchar();// �ƹ�Ű �Է� ��ٸ�
		system("cls"); // �ܼ� â clear
	}
};

int main()
{
	//����ȭ�� ��º�
	MainMenu();

	//�̸� �Էº�
	string nameIn; //������� �г��� �Է°�
	int numIn;
	cout << "*****************< ���� �߱� ���� >**********************" << endl;
	cout << "���޸��� �г����� �Է��Ͻÿ�. : ";
	cin >> nameIn;
	cout << "*********************************************************" << endl;
	Game g(nameIn); //Ŭ���� ����� ���ÿ� ���� ����

	//���� �����
	while (1)
	{
		vector<int> numbers;
		cout << "��1 - 9 ������ ���� 3���� �Է��Ͻÿ�.(�̿��� ���� : ��������)" << endl;
		cout << "�������Է� : ";
		for (int i = 0; i < 3; i++)
		{
			cin >> numIn;
			if (numIn < 1 && numIn>9)
			{
				cout << "������ ���� �Ǿ����ϴ�." << endl;
				break;
			}
			numbers.push_back(numIn);
		}
		if (g.matchStrike(numbers) == 3)
		{
			cout << "\n�����ӽ¸�!! �� " << Game::getCnt() << "ȸ���� �����ϼ̽��ϴ�." << endl;
			break;
		}
		cout << "��Strike : " << g.matchStrike(numbers) << "\t��Ball : " << g.matchBall(numbers) << endl;
	}

	return 0;
}
