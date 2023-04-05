#include <iostream>
#include <ctime>
#include <vector>
using namespace std;
//
//int main()
//{
//	srand(static_cast<unsigned int>(time(NULL)));
//	int num;
//	vector<int> v;
//
//	for (int i = 0; i < 6; i++)
//	{
//		num = (rand() % 45) + 1;
//		// cout<<num<<" ";
//		v.push_back(num);
//	}
//
//	for (auto elem : v) {
//		cout << elem << " ";
//	}
//	return 0;
//}


//실습 (1)
//로또 번호 추첨 프로그램
//1~45 사이의 수 중에서
//랜덤으로 6개의 번호를 추출하는 프로그램
//중복 불가능
//추출이 완료 되면 6개의 당첨번호 출력하기

int main()
{
	int count = 0;
	srand(time(NULL));
	vector<int> v;

	while (count < 6)
	{
		int same = 0;
		int num = (rand() % 45) + 1;

		for (int i = 0; i < count; i++)
		{
			if (num == v[i])
			{
				same = 1;
				break;
			}
		}
		if (same == 0)
		{
			v.push_back(num);
			count++;
		}
	}
	for (int elem : v)
	{
		cout << elem << " ";
	}
	return 0;
}