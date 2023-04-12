#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	string input, output; //입력값과 기존값
	int timer = 0; //타이머
	int count = 0; //성공횟수 class를 쓴다면 static으로!
	string name_in; //휴먼의 닉네임
	cout << "***************************************" << endl;
	cout << " 30초간 끝말잇기 게임하기 " << endl;
	cout << "▶휴먼의 닉네임을 입력하시오. : ";
	cin >> name_in;
	cout << "**************************************" << endl;

	cout << "▶시작 제시어를 입력하세요 : ";
	cin >> output;
	cout << "▶게임 시작!! ";

	clock_t startTime = clock(); //시작 시간

	while (1)
	{

		int output_size = output.size();
		cout << output << endl;

		cout << "▶다음 단어를 입력하세요 : ";
		cin >> input;

		clock_t endTime = clock(); //종료 시간
		int timer = (endTime - startTime) / CLOCKS_PER_SEC; //시간의 차

		if (timer > 30)
		{
			cout << endl << "▶30초가 지났습니다 게임 종료!!" << endl;
			cout << "총 입력한 단어 개수 : " << count << endl;
			break;
		}
		else if (input[0] == output[output_size - 1])
		{
			output += " -> " + input;
			count++;
		}
		else
		{
			cout << "마지막 알파벳를 다시 확인해주세요. \n";
		}
		cout << "남은 시간 : " << 30 - timer << endl << endl; //남은 시간 출력
	}
	return 0;
}