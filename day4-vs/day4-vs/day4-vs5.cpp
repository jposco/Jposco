#include <iostream>
#include <string>
using namespace std;
int main()
{
////------------------------1����--------------------------------------
	//// < 1. 1���� ��[]�� �ִ� {����} �����ϱ� >
	// string city[] = {"korea", "japan", "CH", "UK"};
	//
	// for(auto &k : city)
	// {
	//		cout << k<<" ";
	//  }
//// ------------------------------------------------------------------
	//// < 2. 1���� ��[]�� �ִ� �Է°�cin>> �����ϱ� >
	//	string fruit[3];
	//
	//	for (int i = 0; i < sizeof(fruit) / sizeof(fruit[0]); i++)
	//	{
	//		cin >> fruit[i];
	//	}
	//  for (auto& j : fruit)
	//  {
	//		cout<< j << " ";
	//   }


////----------------------------2����----------------------------------
	//// < 3. 2���� �࿭[][]�� �ִ� {����} 2�������� �����ϱ� >
	//string num[2][4] = { {"a","b","c","d"},{"e","f", "g","h"} };
	//for (auto& arr : num) 
	//{
	//	for (auto& a : arr) 
	//	{
	//		cout << a << " ";
	//	}
	//	cout << endl;
	//}
////-------------------------------------------------------------------
	// < 4. 2���� �࿭[][]�� �ִ� �Է°�cin>> 2�������� �����ϱ� >
	//int score[2][3]; // ex)2���� ������ ������ �Է��Ͻÿ�.
	//int i, j;
	//for (i = 0; i < sizeof(score) / sizeof(score[i]); i++)
	//{
	//	for (j = 0; j < sizeof(score) / sizeof(score[j]); j++)
	//	{
	//		cin >> score[i][j];

	//	}
	//}
	//for (i = 0; i < sizeof(score) / sizeof(score[i]); i++)
	//	{
	//	for (j = 0; j < sizeof(score) / sizeof(score[j]); j++)
	//		{
	//			cout << score[i][j] << " ";
	//		}
	//	cout << score[i][j] << " ";
	//	cout << endl;
	//}

////------------------------------���� �迭----------------------------
	////< �����޸� : ��� �Է¹����� �𸣰�, �Է� ���� ���ڸ� �� ���� �� �� ��� >
	//cout << "ũ�⸦ �Է��ϼ���." << endl; 
	//int num;
	//cin >> num; // ���� 5�� �Է� �޴´ٸ�
	//int* arr = new int[num]; //���� �迭 ���
	//for (int i = 0; i < num; i++)
	//{
	//	arr[i] = i + 1;
	//}
	//for (int i = 0; i < num; i++)
	//{
	//	cout << arr[i]<<" ";//5�� �Է��� ��� 1 2 3 4 5
	//}
	//delete[] arr;
////-----------------------------���� 2�����迭(�� �Ⱦ���)--------------------
////����3 x*y�� ũ�⸦ ���� ������ ���� �迭 arr ����
//	int row, col;
//	int v = 0;
//	cin >> row >> col;
//
//	int** arr = new int* [row]; //���� ũ�Ⱑ 3�� ������ �迭
//
//	for (int i = 0; i < row; i++)
//	{ //������ �࿡ ���̰� 4�� �迭�� �Ҵ�
//		arr[i] = new int[col];
//	}
//	for (int i = 0; i < row; i++) {
//
//		for (int j = 0; j < col; j++) {
//			arr[i][j] = v++;
//			cout << v << " ";
//		}
//		cout << endl;
//	}
//	//����5 arr[0][0]���� arr[x][y]���� ����� �� ���
//
//	for (int i = 0; i < row; i++)
//	{
//		delete[] arr[i];
//	}
//
//	delete[] arr;
//// = �Է¹��� �� 2x4���
//// = [ 1 2 3 4 ]
//// = [ 5 6 7 8 ]

}