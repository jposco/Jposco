#include <iostream>
using namespace std;
int main()
{
	int num;
	cout << "���ڸ� �Է����ּ���. : ";
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