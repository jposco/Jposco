#include <iostream>
#include <string>
using namespace std;

int main()
{
	//과제1 사용자로부터 x,y 2개의 자연수를 입력 받기
	cout << "Please enter two natural numbers : " << endl;
	int x, y;
	cin >> x >> y;
	//과제2 x,y에 0이나 음수를 입력 할 경우 에러 메세지 출력후 다시 입력받기
	if (x <= 0 || y <= 0)
	{
		cout << "error : Bro natural number please~" << endl;
		cin >> x >> y;
		cout << "Okay~ very good sir~" << endl;
	}
	//과제3 x*y의 크기를 갖는 이차원 동적 배열 arr 선언
	int row, col;
	int v = 0;
	cin >> row >> col;

	int** arr = new int* [row]; //행의 크기가 row인 이차원 배열

	for (int i = 0; i < row; i++)
	{ //각각의 행에 길이가 row인 배열을 할당
		arr[i] = new int[col];
	}
	for (int i = 0; i < row; i++) {

		for (int j = 0; j < col; j++) {
			arr[i][j] = v++;
			cout << v << " ";
		}
		cout << endl;
	}
	//과제5 arr[0][0]부터 arr[x][y]까지 저장된 값 출력

	for (int i = 0; i < row; i++)
	{
		delete[] arr[i];
	}

	delete[] arr;
}
