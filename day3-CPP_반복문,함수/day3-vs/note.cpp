#include <iostream>
using namespace std;
int main()
{
	int num;
	cout << "숫자를 입력해주세요. : ";
	cin >> num;
	cout << endl << "output : " << endl;
	for (int i = 1; i <= num; i++)
	{
		for (int j = num; j >= i; j--)
		{
			cout << "*";
		}
		cout << endl;
	}
}