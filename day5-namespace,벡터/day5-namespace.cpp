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
	cout << "은행 돈을 순서대로 입력하세요." << endl;
	cin >> bank >> money; //우리 10000;

	if (bank == "우리")
		cout<<"예상 금액"<< wooriBank::deposit(money);
	else if(bank == "하나")
		cout << "예상 금액" << hanaBank::deposit(money);
	else
	{
		cout << "은행이 잘못되었습니다." << endl;
	}












	return 0;
}