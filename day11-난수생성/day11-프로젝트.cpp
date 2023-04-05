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
				cout << getName() << "(��)�� 31�� �Ǿ����ϴ�. AI �¸�!";
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
		cout << "��AI�� �θ� ���ڴ� : " << random() << endl;
		for (int i = 0; i < random(); i++)
		{
			thirty_one++;
			cout << thirty_one << " ";
			if (thirty_one >= 31)
			{
				cout << "AI�� 31�� �Ǿ����ϴ�. " << getName() << " �¸�!";
				return -1;
			}
		}
		cout << endl;
		this->thirty_one = thirty_one;
		cout << "���� ���ڸ� �ҷ��ֽÿ� : ";
		cin >> next;
		humun(next);
	}

	int random()
	{
		srand(time(NULL)); // ���� �����ϱ�
		int ran_num = (rand() % 3) + 1; //1-3������ �������� �ޱ�
		return ran_num;
	}


};

int main()
{
	srand(time(NULL)); // ���� �����ϱ�
	int first_in = 0; //���� �İ� �����ִ� �Է°�
	int num_in = 0; //������ ��� ���� ���� �Է°�
	string name_in; //������� �г��� �Է°�

	cout << "***************************************" << endl;
	cout << " AI�� ����Ų��� ������ �����ϱ� " << endl;
	cout << "���޸��� �г����� �Է��Ͻÿ�. : ";
	cin >> name_in;
	cout << "**************************************" << endl;
	Game g(name_in);
	cout << "��1. ����   ��2. �İ�  : " ;

	cin >> first_in;
	if (first_in == 1) //���� ���ý� �����Է�
	{
		cout << g.getName() << "�� ���� ���ڸ� �θ��ÿ�!: ";
		cin >> num_in;
		g.humun(num_in);
	}
	else if (first_in == 2) //�İ� ���ý�
	{
		cout << "AI�� ���� ���ڸ� �θ��ϴ� !!!" <<endl; 
		g.ai();
	}
	else cout << "1 or 2 �߿� ������ �޸�^^" << endl;

	return 0;
}