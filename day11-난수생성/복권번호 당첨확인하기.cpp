#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(NULL)));
	vector<int> lottery;
	vector<int> user;
	int count = 0;
	int num = 0, same = 0;

	cout << " -----------------------------------------------" << endl;
	cout << "[  �ζ� 1059ȸ�� (2023.03.18) ��÷��ȣ Ȯ���ϱ� ]" << endl;
	cout << "[  ������ ���� ��ȣ 7�ڸ��� �Է����ּ���.       ]" << endl;
	cout << " -----------------------------------------------" << endl;

	while (count < 7)
	{
		num = (rand() % 45) + 1;

		for (int i = 0; i < count; i++)
		{
			if (num == lottery[i])
			{
				same = 1;
				break;
			}
		}
		if (same == 0)
		{
			lottery.push_back(num);
			count++;
		}
	}

	for (int elem : lottery)
	{
		cout << elem << " ";
	}
	cout << endl;

	for (int i = 0; i < 7; i++)
	{
		int num_in = 0;
		cout << i + 1 << "��° ���ڴ� : ";
		cin >> num_in; //7���� ���� ����
		user.push_back(num_in);
	}

	int same_num = 0;
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			if (lottery[i] == user[j])
			{
				same_num++; //��ġ �Ҷ����� ����
			}
		}
	}

		switch (same_num)
		{
		case '7':
		{
			cout << "���ϵ帳�ϴ�. 7�� ��ȣ ��ġ!!!!" << endl;
			cout << "1� ��÷ �Ǽ̽��ϴ�!!!!!!!!!!" << endl;;
		}
		case '6':
		{
			cout << "���ϵ帳�ϴ�. 6�� ��ȣ ��ġ!!!!" << endl;
			cout << "2� ��÷ �Ǽ̽��ϴ�.!!!!!!!!!!" << endl;;
		}
		case '5':
		{
			cout << "���ϵ帳�ϴ�. 5�� ��ȣ ��ġ!!!!" << endl;
			cout << "3� ��÷ �Ǽ̽��ϴ�.!!!!!!!!!!" << endl;;
		}
		case '4':
		{
			cout << "���ϵ帳�ϴ�. 4�� ��ȣ ��ġ!!!!" << endl;
			cout << "4� ��÷ �Ǽ̽��ϴ�.!!!!!!!!!!" << endl;;
		}
		case '3':
		{
			cout << "���ϵ帳�ϴ�. 3�� ��ȣ ��ġ!!!!" << endl;
			cout << "5� ��÷ �Ǽ̽��ϴ�.!!!!!!!!!!" << endl;;
		}
		default:
		{
			cout << "�ƽ����ϴ�.. ��÷�Դϴ�." << endl;
		}
	}
}