#include <iostream>
#include <string>
using namespace std;

int main()
{

	////�迭
	////�迭�� for���� �� ��Ʈ�̴�.
	//
	//	//int num = 0; //������ ����� �ʱ�ȭ�� ���ÿ� �Ͼ
	//	int num; //������ ����
	//	num = 0; // ������ �ʱ�ȭ 
	//	string str = "";
	//
	//	string fruit[3] = { "apple","banana", "grape" };//3�̶�� ���� ����
	//	//string fruit[] = { "apple","banana", "grape" };//����ΰ� ���� ���� but�ε����� ����
	//	//���� �� �� ũ�Ⱑ �������� ��.
	//	//int num[]�� ����
	//
	//	string fruit1[3];//�迭�� ���� : 3�̶�� ũ�⸦ �����������
	//	fruit1[0] = "apple";//3�� ũ�� -> 0 1 2 �� �ε����� �ٸ�
	//	fruit1[1] = "banana";
	//	fruit1[2] = "grape";
	//	//fruit1[3] = "aaaaa"; -> ����
	//	cout << fruit[0] << endl;
	//	cout << fruit[1] << endl;
	//	cout << fruit[2] << endl;
	//	cout << fruit << endl;
	//
	//	//sizeof() : ����, �ڷ����� ũ�⸦ byte������ ��ȯ����
	//	//int = num; => 12byte
	//	//sizeof(num) => 12�� ��ȯ
	//	for (int i = 0; i < sizeof(fruit)/ sizeof(fruit[0]; i++)//�ε����� 0���� �����ϱ⶧����!! 
	//	//sizeof(fruit) / sizeof(fruit[0])
	//	//sizeof(fruit) / sizeof(string);
	//	{
	//****cin >> fruit[i];//����ڿ��� �Է¹��� 3���� ���� �迭�� �־�ΰ� ���� ��!!!!!!!!!!!!!!!!!!!!!!
	//		cout << fruit[i] << endl;
	//	}
	//


//	//2�����迭
//		//1 2 3
//		//4 5 6
////	for (int i = 0; i < sizeof(fruit)/ sizeof(fruit[0]; i++)//�ε����� 0���� �����ϱ⶧����!! 
//	//int num[2][3] = { { 1,2,3, }, { 4,5,6, } };
//	string num[2][4] = { {"a","b","c","d"},{"e","f", "g","h"}};
//		//num[1][0] = 4;
//		//num[0][1] = 1;
//	//2���� �迭�� ����for��
//		for (int i = 0; i < 2; i++)
//		{
//			for (int j = 0; j < 4; j++) {
//				cout << num[i][j] << " ";
//			}
//			cout<<endl;
//		}

//�迭�� for-each��

	//int num2[3] = { 1,2,3 };
	/*for (int i = 0; i < 3; i++)
	{
		cout << num2[i] << " ";
		cin>>num2;
	}
	cout << endl;*/

	//vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv

	//for (auto n : num2)//n�� �迭���� �ϳ��ϳ� �����Ѵ�.
	//	//auto : �˾Ƽ� �����ش�
	//	//& : ���� ���� �� �������ش�.
	//{
	//	cout << n << " ";
	//}

	//for (auto &n : num2)//������ �ʱ�ȭ �ϰ������ cin!
	//	//auto : �˾Ƽ� �����ش�
	//	//& : ���� ���� �� �������ش�.
	//{
	//	cin >> n;
	//}

////2���� �迭�� ���� for-each��
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

