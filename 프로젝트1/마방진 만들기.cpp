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

	int start = num_in / 2; //1행의 중앙 설정
	int row = 0;	// 행
	int col = start; //열 , 숫자는 1행의 중앙에서 1부터 시작
	int total_number = num_in * num_in; //마방진에 들어갈 총 숫자

	//2차원 배열 선언하기
	{
		int** num_arr = new int* [num_in];
		for (int i = 0; i < num_in; i++)
		{
			num_arr[i] = new int[num_in] {};	// 각각의 행에 크기가 num인 배열을 할당
		}

		//입력값 x 입력값 원소 생성 후 조건에 맞게 집어넣기
		for (int k = 1; k <= total_number; k++)
		{
			num_arr[row][col] = k; //1행의 중앙에서 1부터 숫자 시작하기.
			if (k % num_in == 0) { row++; } //입력한 숫자와 같으면 열을 아래로
			else	// 아니라면 열은 한 칸 위로(--), 행은 옆으로(++)
			{
				row--;
				col++;
			}
			if (row < 0) //행이 맨위(row < 0)를 넘었을경우 맨 밑(num_in - 1)으로 이동
			{
				row = num_in - 1;
			}
			if (col >= num_in) //열이 맨 마지막 (col >= num_in)을 넘었다면 맨 앞으로(col = 0) 이동
			{
				col = 0;
			}
		}

		//배열 출력하기
		for (int i = 0; i < num_in; i++)
		{
			for (int j = 0; j < num_in; j++)
			{
				cout << num_arr[i][j] << " ";
			}
			cout << endl;
		}
		//배열 해제하기
		for (int k = 0; k < num_in; k++)
		{
			delete[] num_arr[k];// 안쪽 배열 해제
		}
		delete[] num_arr;// 바깥 배열 해제
	}

	return 0;

}