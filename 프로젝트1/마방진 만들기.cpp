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

	int start = num_in / 2; //1���� �߾� ����
	int row = 0;	// ��
	int col = start; //�� , ���ڴ� 1���� �߾ӿ��� 1���� ����
	int total_number = num_in * num_in; //�������� �� �� ����

	//2���� �迭 �����ϱ�
	{
		int** num_arr = new int* [num_in];
		for (int i = 0; i < num_in; i++)
		{
			num_arr[i] = new int[num_in] {};	// ������ �࿡ ũ�Ⱑ num�� �迭�� �Ҵ�
		}

		//�Է°� x �Է°� ���� ���� �� ���ǿ� �°� ����ֱ�
		for (int k = 1; k <= total_number; k++)
		{
			num_arr[row][col] = k; //1���� �߾ӿ��� 1���� ���� �����ϱ�.
			if (k % num_in == 0) { row++; } //�Է��� ���ڿ� ������ ���� �Ʒ���
			else	// �ƴ϶�� ���� �� ĭ ����(--), ���� ������(++)
			{
				row--;
				col++;
			}
			if (row < 0) //���� ����(row < 0)�� �Ѿ������ �� ��(num_in - 1)���� �̵�
			{
				row = num_in - 1;
			}
			if (col >= num_in) //���� �� ������ (col >= num_in)�� �Ѿ��ٸ� �� ������(col = 0) �̵�
			{
				col = 0;
			}
		}

		//�迭 ����ϱ�
		for (int i = 0; i < num_in; i++)
		{
			for (int j = 0; j < num_in; j++)
			{
				cout << num_arr[i][j] << " ";
			}
			cout << endl;
		}
		//�迭 �����ϱ�
		for (int k = 0; k < num_in; k++)
		{
			delete[] num_arr[k];// ���� �迭 ����
		}
		delete[] num_arr;// �ٱ� �迭 ����
	}

	return 0;

}