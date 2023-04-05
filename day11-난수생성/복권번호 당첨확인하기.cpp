#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(NULL)));
	vector<int> lottery;
	vector<int> user;
	int count = 0;
	int num = 0, same = 0;

	cout << " -----------------------------------------------" << endl;
	cout << "[  로또 1059회차 (2023.03.18) 당첨번호 확인하기 ]" << endl;
	cout << "[  찍으신 복권 번호 7자리를 입력해주세요.       ]" << endl;
	cout << " -----------------------------------------------" << endl;

	while (count < 7)
	{
		num = (rand() % 45) + 1;

		for (int i = 0; i < count; i++)
		{
			if (num == lottery[i])
			{
				same = 1;
				break;
			}
		}
		if (same == 0)
		{
			lottery.push_back(num);
			count++;
		}
	}

	for (int elem : lottery)
	{
		cout << elem << " ";
	}
	cout << endl;

	for (int i = 0; i < 7; i++)
	{
		int num_in = 0;
		cout << i + 1 << "번째 숫자는 : ";
		cin >> num_in; //7개의 숫자 선언
		user.push_back(num_in);
	}

	int same_num = 0;
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			if (lottery[i] == user[j])
			{
				same_num++; //일치 할때마다 적립
			}
		}
	}

		switch (same_num)
		{
		case '7':
		{
			cout << "축하드립니다. 7개 번호 일치!!!!" << endl;
			cout << "1등에 당첨 되셨습니다!!!!!!!!!!" << endl;;
		}
		case '6':
		{
			cout << "축하드립니다. 6개 번호 일치!!!!" << endl;
			cout << "2등에 당첨 되셨습니다.!!!!!!!!!!" << endl;;
		}
		case '5':
		{
			cout << "축하드립니다. 5개 번호 일치!!!!" << endl;
			cout << "3등에 당첨 되셨습니다.!!!!!!!!!!" << endl;;
		}
		case '4':
		{
			cout << "축하드립니다. 4개 번호 일치!!!!" << endl;
			cout << "4등에 당첨 되셨습니다.!!!!!!!!!!" << endl;;
		}
		case '3':
		{
			cout << "축하드립니다. 3개 번호 일치!!!!" << endl;
			cout << "5등에 당첨 되셨습니다.!!!!!!!!!!" << endl;;
		}
		default:
		{
			cout << "아쉽습니다.. 낙첨입니다." << endl;
		}
	}
}