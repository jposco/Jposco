#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{










































//{
//	std::srand(time(NULL));
//
//	const int amount = 3;
//	int com[amount] = {};
//	int user[amount] = {};
//	int count = 0, value_count = 0, place_count = 0, user_num = 0;
//	bool dupli = false;
//
//	while (count < amount)
//	{
//		dupli = false;
//		int num = std::rand() % 9 + 1;
//		for (int i = 0; i < amount; i++)
//		{
//			if (com[i] == num)
//			{
//				dupli = true;	// 중복되는 숫자시 저장하지 않고 탈출
//				break;
//			}
//		}
//		if (!dupli)
//		{
//			com[count] = num;	// 숫자 저장
//			count++;			// 몇개 저장했는지 카운트
//		}
//	}
//
//	/*
//	cout << "컴퓨터의 번호 : ";
//	for (int i = 0; i < amount; i++)
//	{
//		cout << com[i] << " ";	// 컴퓨터 번호 출력
//	}
//	cout << endl << endl;
//	*/
//	count = 0;
//
//	do
//	{
//		count++;
//		cout << "1 ~ 9 사이의 숫자 3개를 입력 하시오. (이외의 숫자: 종료)" << endl << "입력한 수: ";
//
//		for (int i = 0; i < amount; i++)
//		{
//			cin >> user_num;
//			user[i] = user_num;	// 입력 받은 수를 배열에 저장
//			if (user_num > 9 || user_num < 1)
//			{
//				dupli = true;	// 1 ~ 9 범위를 벗어나면 종료
//			}
//		}
//
//		for (int j = 0; j < amount; j++)
//		{
//			if (com[j] == user[j])
//			{
//				place_count++;	// 자리와 숫자가 같을 때 카운트 (Ball)
//			}
//			for (int i = 0; i < amount; i++)
//			{
//				if (com[j] != user[j] && com[i] == user[j])
//				{
//					value_count++;	// 자리는 다르고 숫자만 같을 때 카운트 (Strike)
//				}
//			}
//		}
//
//		cout << "Strike : " << place_count << "\t Ball : " << value_count << endl << endl;
//
//		if (place_count == 3)
//		{
//			cout << count << "번 만에 맞췄습니다." << endl;
//			break;
//		}
//		else
//		{
//			place_count = 0;
//			value_count = 0;
//		}
//	} while (dupli == false);
//
//	return 0;
}
