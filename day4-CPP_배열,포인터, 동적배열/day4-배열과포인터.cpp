#include <iostream>
#include <string>
using namespace std;

int main()
{

	////배열
	////배열과 for문은 한 세트이다.
	//
	//	//int num = 0; //변수의 선언과 초기화가 동시에 일어남
	//	int num; //변수의 선언
	//	num = 0; // 변수의 초기화 
	//	string str = "";
	//
	//	string fruit[3] = { "apple","banana", "grape" };//3이라고 선언 가능
	//	//string fruit[] = { "apple","banana", "grape" };//비워두고 선언 가능 but인덱스는 지정
	//	//선언 할 때 크기가 정해져야 함.
	//	//int num[]도 가능
	//
	//	string fruit1[3];//배열의 선언 : 3이라고 크기를 지정해줘야함
	//	fruit1[0] = "apple";//3은 크기 -> 0 1 2 는 인덱스라서 다름
	//	fruit1[1] = "banana";
	//	fruit1[2] = "grape";
	//	//fruit1[3] = "aaaaa"; -> 오류
	//	cout << fruit[0] << endl;
	//	cout << fruit[1] << endl;
	//	cout << fruit[2] << endl;
	//	cout << fruit << endl;
	//
	//	//sizeof() : 변수, 자료형의 크기를 byte단위로 반환해줌
	//	//int = num; => 12byte
	//	//sizeof(num) => 12로 반환
	//	for (int i = 0; i < sizeof(fruit)/ sizeof(fruit[0]; i++)//인덱스는 0부터 시작하기때문에!! 
	//	//sizeof(fruit) / sizeof(fruit[0])
	//	//sizeof(fruit) / sizeof(string);
	//	{
	//****cin >> fruit[i];//사용자에게 입력받은 3개의 값을 배열에 넣어두고 싶을 때!!!!!!!!!!!!!!!!!!!!!!
	//		cout << fruit[i] << endl;
	//	}
	//


//	//2차원배열
//		//1 2 3
//		//4 5 6
////	for (int i = 0; i < sizeof(fruit)/ sizeof(fruit[0]; i++)//인덱스는 0부터 시작하기때문에!! 
//	//int num[2][3] = { { 1,2,3, }, { 4,5,6, } };
//	string num[2][4] = { {"a","b","c","d"},{"e","f", "g","h"}};
//		//num[1][0] = 4;
//		//num[0][1] = 1;
//	//2차원 배열의 이중for문
//		for (int i = 0; i < 2; i++)
//		{
//			for (int j = 0; j < 4; j++) {
//				cout << num[i][j] << " ";
//			}
//			cout<<endl;
//		}

//배열과 for-each문

	//int num2[3] = { 1,2,3 };
	/*for (int i = 0; i < 3; i++)
	{
		cout << num2[i] << " ";
		cin>>num2;
	}
	cout << endl;*/

	//vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv

	//for (auto n : num2)//n에 배열원소 하나하나 접근한다.
	//	//auto : 알아서 정해준다
	//	//& : 값을 받을 때 참조해준다.
	//{
	//	cout << n << " ";
	//}

	//for (auto &n : num2)//변수를 초기화 하고싶을때 cin!
	//	//auto : 알아서 정해준다
	//	//& : 값을 받을 때 참조해준다.
	//{
	//	cin >> n;
	//}

////2차원 배열에 대한 for-each문
//	string num[2][4] = { {"a","b","c","d"},{"e","f", "g","h"} };
//	for (auto &arr: num) {
//		for(auto &a : arr ){
//			cout << a << " ";
//		}
//		cout << endl;
//	}

	int num[] = { 1,2,3,4 };
	for (int i = 0; sizeof(num) / sizeof(num[0]); i++)
	{
		cout << num << endl; o
	}












}

