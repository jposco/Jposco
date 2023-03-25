#include <iostream>
#include <string>
using namespace std;
int main()
{
////------------------------1차원--------------------------------------
	//// < 1. 1차원 행[]에 있는 {변수} 나열하기 >
	// string city[] = {"korea", "japan", "CH", "UK"};
	//
	// for(auto &k : city)
	// {
	//		cout << k<<" ";
	//  }
//// ------------------------------------------------------------------
	//// < 2. 1차원 행[]에 있는 입력값cin>> 나열하기 >
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


////----------------------------2차원----------------------------------
	//// < 3. 2차원 행열[][]에 있는 {변수} 2차원으로 나열하기 >
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
	// < 4. 2차원 행열[][]에 있는 입력값cin>> 2차원으로 나열하기 >
	//int score[2][3]; // ex)2명의 국영수 성적을 입력하시오.
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

////------------------------------동적 배열----------------------------
	////< 동적메모리 : 몇개를 입력받을지 모르고, 입력 받은 숫자를 쫙 나열 할 때 사용 >
	//cout << "크기를 입력하세요." << endl; 
	//int num;
	//cin >> num; // 만약 5를 입력 받는다면
	//int* arr = new int[num]; //동적 배열 사용
	//for (int i = 0; i < num; i++)
	//{
	//	arr[i] = i + 1;
	//}
	//for (int i = 0; i < num; i++)
	//{
	//	cout << arr[i]<<" ";//5를 입력할 경우 1 2 3 4 5
	//}
	//delete[] arr;
////-----------------------------동적 2차원배열(잘 안쓰임)--------------------
////과제3 x*y의 크기를 갖는 이차원 동적 배열 arr 선언
//	int row, col;
//	int v = 0;
//	cin >> row >> col;
//
//	int** arr = new int* [row]; //행의 크기가 3인 이차원 배열
//
//	for (int i = 0; i < row; i++)
//	{ //각각의 행에 길이가 4인 배열을 할당
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
//	//과제5 arr[0][0]부터 arr[x][y]까지 저장된 값 출력
//
//	for (int i = 0; i < row; i++)
//	{
//		delete[] arr[i];
//	}
//
//	delete[] arr;
//// = 입력받은 값 2x4라면
//// = [ 1 2 3 4 ]
//// = [ 5 6 7 8 ]

}