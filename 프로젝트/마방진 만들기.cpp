#include <iostream>
#include <string>

using namespace std;

int main()
{
	int num_in = 0;
	cout << " �������� �� Ȥ�� ���� ���� �ڿ���(Ȧ��)�� �Է����ּ���. : ";
	while (1)
	{
		cin >> num_in;
		if (num_in % 2 == 1) { break; }
		else cout << "Ȧ���� �Է����ּ���." << endl;
	}

	int** num_arr = new int* [num_in];
	int center = num_in / 2;
	int row = 0;	// ��
	int col = 0;
	int number = num_in * num_in; //�������� �� ����

	for (int i = 0; i < num_in; i++)
	{
		num_arr[i] = new int[num_in];	// ������ �࿡ ũ�Ⱑ num�� �迭�� �Ҵ�
	}
	for (int k = 0; k < number; k++)
	{
		num_arr[row][col] = k;
	}




	for (int i = 0; i < num_in; i++)
	{
		for (int j = 0; j < num_in; j++)
		{
			cout << num_arr[i][j] << " ";
		}
		cout << endl;
	}

	for (int k = 0; k < num_in; k++)
	{
		delete[] num_arr[k];	// ���� �迭 ����
	}
	delete[] num_arr;	// �ٱ� �迭 ����

	return 0;
}




//
//#include<iostream>
//#include<string>
//
//using namespace std;
//// ������
//int main()
//{
//	int num = 0;
//
//	while (1)
//	{
//		cout << "�������� �� Ȥ�� ���� ���� �ڿ���(Ȧ��)�� �Է����ּ��� : ";
//		cin >> num;
//		cout << endl;
//		if (num % 2 == 1)
//			break;
//	}
//
//	int** num_arr = new int* [num];		// ���� ũ�Ⱑ num�� ������ �迭
//	int center = num / 2;	// ù��° �ε����� �ִ� ���� 1�� ù ���� ����� ��ġ�ϵ��� ��.
//	int i = 0;	// ��
//	int j = center;	// ��
//
//	for (int k = 0; k < num; k++)
//	{// ������ index�� �����ϰ��� �ϴ� �迭�� ũ�⸸ŭ�� ����Ű�� �Ѵ�.
//		num_arr[k] = new int[num];		// ������ �࿡ ũ�Ⱑ num�� �迭�� �Ҵ�
//	}
//
//	for (int k = 1; k <= num * num; k++)	// num * num �� ��ŭ�� ���� ����
//	{
//		num_arr[i][j] = k;	// k�� ��µǴ� ����
//		if (k % num == 0)	// k�� num�� �������� ���� �Ʒ���
//		{
//			i++;
//		}
//		else	// �ƴ϶�� ���� �� ĭ ����, ���� ������
//		{
//			i--;
//			j++;
//		}
//		if (i < 0)	// ���� �� ���� ����, ���� ���� �Ʒ��ٷ� �̵�
//		{
//			i = num - 1;
//		}
//		if (j >= num)	// ���� ������ �̵��ϸ� �ٽ� ù��° ������ �̵�
//		{
//			j = 0;
//		}
//	}
//
//	for (int i = 0; i < num; i++)
//	{
//		for (int j = 0; j < num; j++)
//		{// ���
//			cout << num_arr[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//	for (int k = 0; k < num; k++)
//	{
//		delete[] num_arr[k];	// ���� �迭 ����
//	}
//	delete[] num_arr;	// �ٱ� �迭 ����
//
//	return 0;
//}
