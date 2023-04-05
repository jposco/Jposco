#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

// 타임어택 끝말잇기 게임
int main()
{
	clock_t startTime = clock();

	string input, output = "airplane";
	int n, timer = 0, count = 0;


	while (1)
	{
		n = output.size();
		cout << output << endl;

		cout << "다음 단어를 입력하세요. : ";
		cin >> input;

		clock_t endTime = clock();
		timer = (endTime - startTime) / CLOCKS_PER_SEC;

		if (timer > 15)
		{
			cout << endl << "게임 종료 \n" << "총 입력한 단어 개수 : " << count;
			break;
		}
		else if (input[0] == output[n - 1])
		{
			output += " -> " + input;
			count++;
			//cout << endl;
		}
		else
		{
			cout << "잘못된 입력입니다. \n";
		}
		cout << "경과한 시간: " << timer << endl << endl;
	}

	return 0;
}