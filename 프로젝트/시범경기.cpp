#include <iostream>
#include <ctime>
using namespace std;

class CGame
{
private:
	string name;
	int thirty_one = 0;
	int next = 0;

	int random() //AI�� �θ� �������� ����
	{
		srand(time(NULL)); // ���� �����ϱ�
		int ran_num = (rand() % 3) + 1; //1-3������ �������� �ޱ�
		return ran_num;
	}

public:
	CGame(string name) //����� �г��� �Է�
	{
		this->name = name;
	}
	string getName() //�̸� ��°�
	{
		return name;
	}

	void firstgame(int first_in)
	{
		if (first_in == 1) //���� ���ý� ���� �����Է�
		{
			cout << getName() << "�� ���� ���ڸ� �θ��ÿ�!: ";
			int num_in;
			cin >> num_in;
			humun(num_in);
		}
		else //�İ� ���ý�
		{
			cout << "AI�� ���� ���ڸ� �θ��ϴ� !!!" << endl;
			ai();
		}
	}

	int humun(int num_in) //�޸�����
	{
		cout << "��" << getName() << "���� �θ� ���ڴ� : " << num_in << endl;
		while (num_in > 3)
		{
			cout << "�޸�... 1-3������ �Է����ּ���.. �ٽ� �Է� : ";
			cin >> num_in;
			cout << "��" << getName() << "���� �θ� ���ڴ� : " << num_in << endl;
		}
		for (int i = 0; i < num_in; i++)
		{
			thirty_one++;
			cout << thirty_one << " ";
			if (thirty_one >= 31)
			{
				cout << endl << "****��" << getName() << "(��)�� 31�� �Ǿ����ϴ�. AI �¸�!****";
				return -1;
			}
		}
		cout << endl;
		this->thirty_one = thirty_one;
		ai();
	}

	int ai() // AI����
	{
		cout << "��AI�� �θ� ���ڴ� : " << random() << endl;
		for (int i = 0; i < random(); i++)
		{
			thirty_one++;
			cout << thirty_one << " ";
			if (thirty_one >= 31)
			{
				cout << endl << "****��AI�� 31�� �Ǿ����ϴ�. " << getName() << " �¸�!****";
				return -1;
			}
		}
		cout << endl;
		this->thirty_one = thirty_one;
		cout << "---���� ���ڸ� �ҷ��ֽÿ� : ";
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
		cout << "\t\t"; cout << "   ������ �����Ϸ��� �ƹ�Ű�� ��������.\n\n\n\n\n\n\n";
		getchar(); // �ƹ�Ű �Է� ��ٸ�
		system("cls"); // �ܼ� â clear
	}
};

int main()
{
	MainMenu();
	string name_in; //������� �г��� �Է°�
	int first_in = 0; //���� �İ� �����ִ� �Է°�
	int num_in = 0; //������ ��� �Է°�

	cout << "*****************< AI vs humun >**********************" << endl;
	//cout << " AI�� ����Ų��� ������ �����ϱ� " << endl;
	cout << "���޸��� �г����� �Է��Ͻÿ�. : ";
	cin >> name_in;
	cout << "******************************************************" << endl;
	CGame g(name_in);

	cout << "��1. ����   ��2. �İ� : ";
	cin >> first_in;

	while (first_in > 2)
	{
		cout << "1 or 2 �߿� ������ �޸�^^" << endl;
		cin >> first_in;
	}
	g.firstgame(first_in);

	return 0;
}