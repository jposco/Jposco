#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	srand(time(NULL)); // ���� �����ϱ�
	int thirty_one = 0;
	int num_in;

	cout << "***********************************" << endl;
	cout << " AI�� ����Ų��� ������ �����ϱ� " << endl;
	cout << "��1. ����   ��2. �İ�" << endl;
	int first;
	cin >> first;
	cout << "***********************************" << endl << endl;

	while (thirty_one < 31)
	{
		int num = (rand() % 3) + 1; //1-3������ �������� �ޱ�

		//�޸� ����
		cout << "�޸� ���� ���ڸ� �θ��ÿ�! : ";
		cin >> num_in;
		for (int i = 0; i < num_in; i++)
		{
			thirty_one++;
			cout << thirty_one << endl;
			if (thirty_one >= 31)
			{
				cout << "AI�� 31�� �Ǿ����ϴ�. �޸� �¸�!";
				break;
			}
		}
		//AI����
		cout << "��ǻ�Ͱ� ������ ���� : " << num << endl;
		for (int i = 0; i < num_in; i++)
		{
			thirty_one++;
			cout << thirty_one << endl;
			if (thirty_one >= 31)
			{
				cout << "AI�� 31�� �Ǿ����ϴ�. �޸� �¸�!";
				break;
			}
		}
		cout << "---------------------------------------------------" << endl;
	}
	return 0;
}