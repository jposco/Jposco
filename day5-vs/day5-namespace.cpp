#include <iostream>
#include <string>
#include <vector>
using namespace std;
//
//namespace test1 {
//	int num = 1;
//	int sum(int n, int n2) {
//		return 0;
//	}
//}
//
//namespace test2 {
//	int num = 3;
//	int sum(int n, int n2) {
//		return 0;
//	}
//}
//
//int main() {
//	int num = 0;
//	cout << num << endl;
//	cout << test1::num << endl;
//	cout << test2::num << endl;
//}

namespace NH
{
	int balance = 0;
	double deposit(int money)
	{
		double money_d = (double)money;
		return money_d + 0.03 * money_d;
	}
}
namespace HN
{
	int balance = 0;
	double deposit(int money)
	{
		double money_d = (double)money;
		return money_d + 0.04 * money_d;
	}
}

namespace KB
{
	int balance = 0;
	double deposit(int money)
	{
		double money_d = (double)money;
		return money_d + 0.05 * money_d;
	}
}

int main()
{
	int money;
	string bank;
	cout << "���� ���� ������� �Է��ϼ���." << endl;
	cin >> bank >> money; //�츮 10000;

	if (bank == "�츮")
		cout<<"���� �ݾ�"<< wooriBank::deposit(money);
	else if(bank == "�ϳ�")
		cout << "���� �ݾ�" << hanaBank::deposit(money);
	else
	{
		cout << "������ �߸��Ǿ����ϴ�." << endl;
	}












	return 0;
}