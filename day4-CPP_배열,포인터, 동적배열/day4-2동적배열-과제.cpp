#include <iostream>
#include <string>
using namespace std;

int main()
{
	//����1 ����ڷκ��� x,y 2���� �ڿ����� �Է� �ޱ�
	cout << "Please enter two natural numbers : " << endl;
	int x, y;
	cin >> x >> y;
	//����2 x,y�� 0�̳� ������ �Է� �� ��� ���� �޼��� ����� �ٽ� �Է¹ޱ�
	if (x <= 0 || y <= 0)
	{
		cout << "error : Bro natural number please~" << endl;
		cin >> x >> y;
		cout << "Okay~ very good sir~" << endl;
	}
	//����3 x*y�� ũ�⸦ ���� ������ ���� �迭 arr ����
	int row, col;
	int v = 0;
	cin >> row >> col;

	int** arr = new int* [row]; //���� ũ�Ⱑ row�� ������ �迭

	for (int i = 0; i < row; i++)
	{ //������ �࿡ ���̰� row�� �迭�� �Ҵ�
		arr[i] = new int[col];
	}
	for (int i = 0; i < row; i++) {

		for (int j = 0; j < col; j++) {
			arr[i][j] = v++;
			cout << v << " ";
		}
		cout << endl;
	}
	//����5 arr[0][0]���� arr[x][y]���� ����� �� ���

	for (int i = 0; i < row; i++)
	{
		delete[] arr[i];
	}

	delete[] arr;
}
