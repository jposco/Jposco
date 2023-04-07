#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

int main()
{
	srand(time(NULL));
	vector<int> lotteryNum; //���� ��÷��ȣ ����
	vector<int> userNum; //������ �Է��� ��ȣ ����
	int randNum = 0; //������ ����
	int numIn = 0; //������ �Է��� ����
	int sameNum = 0; //�� ���Ͱ� ��ġ ����
	bool bonusNum = false; //���ʽ� ������ġ Ȯ�ο� BOOL

	cout << " -----------------------------------------------" << endl;
	cout << "[  �ζ� 1062ȸ�� (2023.04.08) ��÷��ȣ Ȯ���ϱ� ]" << endl;
	cout << "[  ������ ���� ��ȣ 6�ڸ��� �Է����ּ���.       ]" << endl;
	cout << " -----------------------------------------------" << endl;

	//�ζ� ��÷��ȣ �����ϱ�
	for (int i = 0; i < 7; i++)
	{
		bool flag = true; //���� �ߺ����� ������ BOOL
		randNum = rand() % 45 + 1;
		for (int j = 0; j < lotteryNum.size(); j++)
		{
			if (randNum == lotteryNum.at(j))
			{
				flag = false; //�ߺ��� ���� �߻�
				break;
			}
		}
		if (!flag) { i--; } //�ߺ��� ������ ����÷
		else { lotteryNum.push_back(randNum); }
	}

	//�ζ� ��÷��ȣ ����ϱ�
	cout << endl << "���ζ� 1059ȸ�� (2023.03.18) ��÷��ȣ�� : ";
	for (int i = 0; i < 6; i++)
	{
		cout << lotteryNum.at(i) << " ";
	}
	cout << "+ " << lotteryNum.at(6) << endl << endl;

	//�ζ� ���ù�ȣ 6�� �Է��ϱ�
	for (int i = 1; i <= 6; i++)
	{
		cout << "��" << i << "��° ���ڴ� : ";
		cin >> numIn;
		userNum.push_back(numIn);
	}
	cout << endl;

	//�ζ� ��÷��ȣ ���ϱ�
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (lotteryNum[i] == userNum[j])
			{
				sameNum++; //��ġ �Ҷ����� ����
			}
		}
	}
	
	//�ζ� ���ʽ���ȣ ���ϱ�
	for (int i = 0; i < 6; i++)
	{
		if (userNum[i] == lotteryNum.at(6))
		{
			bonusNum = true;
			break;
		}
	}

	//�ζ� ��÷���� ����ϱ�
	if (sameNum > 2)
	{
		if (sameNum == 5 && bonusNum)
		{
			cout << "�����ϵ帳�ϴ�. " << sameNum << "����ȣ ��ġ + ���ʽ� ��ȣ ��ġ!!!!" << endl;
			cout << "��" << 2<< "� ��÷�Ǽ̽��ϴ�!!" << endl;
		}

		else if (sameNum && 5 || !bonusNum)
		{
			cout << "�����ϵ帳�ϴ�. " << sameNum << "�� ��ȣ ��ġ!!!!" << endl;
			cout << "��" << 3 << "� ��÷�Ǽ̽��ϴ�!!" << endl;
		}
		else
		{
			cout << "�����ϵ帳�ϴ�. " << sameNum << "�� ��ȣ ��ġ!!!!" << endl;
			cout << "��" << 7 - sameNum << "� ��÷�Ǽ̽��ϴ�!!" << endl;
		}
	}
	else
	{
		cout << "���ƽ����ϴ�. ��÷�Դϴ�." << endl;
	}
}