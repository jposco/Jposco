#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{










































//{
//	std::srand(time(NULL));
//
//	const int amount = 3;
//	int com[amount] = {};
//	int user[amount] = {};
//	int count = 0, value_count = 0, place_count = 0, user_num = 0;
//	bool dupli = false;
//
//	while (count < amount)
//	{
//		dupli = false;
//		int num = std::rand() % 9 + 1;
//		for (int i = 0; i < amount; i++)
//		{
//			if (com[i] == num)
//			{
//				dupli = true;	// �ߺ��Ǵ� ���ڽ� �������� �ʰ� Ż��
//				break;
//			}
//		}
//		if (!dupli)
//		{
//			com[count] = num;	// ���� ����
//			count++;			// � �����ߴ��� ī��Ʈ
//		}
//	}
//
//	/*
//	cout << "��ǻ���� ��ȣ : ";
//	for (int i = 0; i < amount; i++)
//	{
//		cout << com[i] << " ";	// ��ǻ�� ��ȣ ���
//	}
//	cout << endl << endl;
//	*/
//	count = 0;
//
//	do
//	{
//		count++;
//		cout << "1 ~ 9 ������ ���� 3���� �Է� �Ͻÿ�. (�̿��� ����: ����)" << endl << "�Է��� ��: ";
//
//		for (int i = 0; i < amount; i++)
//		{
//			cin >> user_num;
//			user[i] = user_num;	// �Է� ���� ���� �迭�� ����
//			if (user_num > 9 || user_num < 1)
//			{
//				dupli = true;	// 1 ~ 9 ������ ����� ����
//			}
//		}
//
//		for (int j = 0; j < amount; j++)
//		{
//			if (com[j] == user[j])
//			{
//				place_count++;	// �ڸ��� ���ڰ� ���� �� ī��Ʈ (Ball)
//			}
//			for (int i = 0; i < amount; i++)
//			{
//				if (com[j] != user[j] && com[i] == user[j])
//				{
//					value_count++;	// �ڸ��� �ٸ��� ���ڸ� ���� �� ī��Ʈ (Strike)
//				}
//			}
//		}
//
//		cout << "Strike : " << place_count << "\t Ball : " << value_count << endl << endl;
//
//		if (place_count == 3)
//		{
//			cout << count << "�� ���� ������ϴ�." << endl;
//			break;
//		}
//		else
//		{
//			place_count = 0;
//			value_count = 0;
//		}
//	} while (dupli == false);
//
//	return 0;
}
