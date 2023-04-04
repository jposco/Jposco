#include <iostream>
#include <ctime>//시간을 불러오는 인클루드

using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(NULL))); //씨앗심기(시간기준)

	for (int i = 0; i < 5; i++)
		cout << " 난수 : " << rand() << endl;//난수생성

	return 0;
}
