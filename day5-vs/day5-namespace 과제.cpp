#include <iostream>
#include <string>
#include <vector>

using namespace std;

namespace seoul
{
	int num1=02;
	string landmark = "±¹¹ä";
}
namespace busan
{
	int num2=03;
	string landmark = "µÅÁö±¹¹ä";
	int sum(int n1, int n2){
		return n1 + n2;
	}
}
int main()
{
	cout << seoul::num1<<" : " << seoul::landmark << endl;
	cout << busan::num2 << " : " << busan::landmark << endl;
	cout << busan::sum(1, 2);
}