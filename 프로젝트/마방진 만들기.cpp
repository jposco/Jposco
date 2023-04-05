#include <iostream>
#include <string>

using namespace std;

int main()
{
	int num_in = 0;
	cout << " 마방진의 행 혹은 열의 수를 자연수(홀수)로 입력해주세요. : ";
	while (1)
	{
		cin >> num_in;
		if (num_in % 2 == 1) { break; }
		else cout << "홀수를 입력해주세요." << endl;
	}

	int** num_arr = new int* [num_in];
	int center = num_in / 2;
	int row = 0;	// 행
	int col = 0;
	int number = num_in * num_in; //마방진에 들어갈 숫자

	for (int i = 0; i < num_in; i++)
	{
		num_arr[i] = new int[num_in];	// 각각의 행에 크기가 num인 배열을 할당
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
		delete[] num_arr[k];	// 안쪽 배열 해제
	}
	delete[] num_arr;	// 바깥 배열 해제

	return 0;
}




//
//#include<iostream>
//#include<string>
//
//using namespace std;
//// 마방진
//int main()
//{
//	int num = 0;
//
//	while (1)
//	{
//		cout << "마방진의 행 혹은 열의 수를 자연수(홀수)로 입력해주세요 : ";
//		cin >> num;
//		cout << endl;
//		if (num % 2 == 1)
//			break;
//	}
//
//	int** num_arr = new int* [num];		// 행의 크기가 num인 이차원 배열
//	int center = num / 2;	// 첫번째 인덱스에 있는 숫자 1을 첫 행의 가운데에 위치하도록 함.
//	int i = 0;	// 행
//	int j = center;	// 열
//
//	for (int k = 0; k < num; k++)
//	{// 각각의 index에 선언하고자 하는 배열의 크기만큼을 가리키게 한다.
//		num_arr[k] = new int[num];		// 각각의 행에 크기가 num인 배열을 할당
//	}
//
//	for (int k = 1; k <= num * num; k++)	// num * num 개 만큼의 원소 생성
//	{
//		num_arr[i][j] = k;	// k는 출력되는 숫자
//		if (k % num == 0)	// k가 num과 같아지면 열을 아래로
//		{
//			i++;
//		}
//		else	// 아니라면 열은 한 칸 위로, 행은 옆으로
//		{
//			i--;
//			j++;
//		}
//		if (i < 0)	// 열이 맨 위로 가면, 열을 가장 아래줄로 이동
//		{
//			i = num - 1;
//		}
//		if (j >= num)	// 행이 끝까지 이동하면 다시 첫번째 행으로 이동
//		{
//			j = 0;
//		}
//	}
//
//	for (int i = 0; i < num; i++)
//	{
//		for (int j = 0; j < num; j++)
//		{// 출력
//			cout << num_arr[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//	for (int k = 0; k < num; k++)
//	{
//		delete[] num_arr[k];	// 안쪽 배열 해제
//	}
//	delete[] num_arr;	// 바깥 배열 해제
//
//	return 0;
//}
