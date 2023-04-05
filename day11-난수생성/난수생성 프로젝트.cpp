#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	srand(time(NULL)); // 난수 생성하기
	int thirty_one = 0;
	int num_in;

	cout << "***********************************" << endl;
	cout << " AI와 베스킨라빈스 서리원 게임하기 " << endl;
	cout << "▶1. 선공   ▶2. 후공" << endl;
	int first;
	cin >> first;
	cout << "***********************************" << endl << endl;

	while (thirty_one < 31)
	{
		int num = (rand() % 3) + 1; //1-3사이의 랜덤숫자 받기

		//휴먼 차례
		cout << "휴먼 먼저 숫자를 부르시오! : ";
		cin >> num_in;
		for (int i = 0; i < num_in; i++)
		{
			thirty_one++;
			cout << thirty_one << endl;
			if (thirty_one >= 31)
			{
				cout << "AI가 31이 되었습니다. 휴먼 승리!";
				break;
			}
		}
		//AI차례
		cout << "컴퓨터가 제시한 숫자 : " << num << endl;
		for (int i = 0; i < num_in; i++)
		{
			thirty_one++;
			cout << thirty_one << endl;
			if (thirty_one >= 31)
			{
				cout << "AI가 31이 되었습니다. 휴먼 승리!";
				break;
			}
		}
		cout << "---------------------------------------------------" << endl;
	}
	return 0;
}