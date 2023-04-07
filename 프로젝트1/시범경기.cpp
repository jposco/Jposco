#include <iostream>
#include <ctime>
#include <string>
using namespace std;

class Calculator
{
protected:
	static double resultNum;
	virtual void cal() {};
public:
	void cal() {
		cout << "--------------------------------------------------" << endl;
		cout << "▶결과 : " << resultNum << endl;
		cout << "--------------------------------------------------" << endl;
	}
};

class Plus : public Calculator {
	double x = 0;
	double y = 0;
public:
	Plus(double x, double y) :Calculator()
	{
		this->resultNum = x + y;
		Calculator::cal();
	}
};

class Minus : public Calculator {
	double x = 0;
	double y = 0;
public:
	Minus(double x, double y) :Calculator()
	{
		this->resultNum = x - y;
		Calculator::cal();
	}
};

class Multi : public Calculator {
	double x = 0;
	double y = 0;
public:
	Multi(double x, double y) :Calculator()
	{
		this->resultNum = x * y;
		Calculator::cal();
	}
};

class Division : public Calculator {
	double x = 0;
	double y = 0;
public:
	Division(double x, double y) :Calculator()
	{
		this->resultNum = x / y;
		Calculator::cal();
	}
};

double Calculator::resultNum = 0;

void function(double x, char oper, double y)
{
	switch (oper) {
	case '+': {
		Calculator* cal = new Plus(x, y);	
		delete cal;
		break;
	}
	case '-': {
		Calculator* cal = new Minus(x, y);
		delete cal;
		break;
	}
	case '/': {
		Calculator* cal = new Division(x, y);
		delete cal;
		break;
	}
	case '*': {
		Calculator* cal = new Multi(x, y);
		delete cal;
		break;
	}
	default:
		cout << "+ , - , / , * 연산자를 입력해주세요." << endl;
		break;
	}
int main()
{
	double x = 0, y = 0;
	char operator;

	cout << "숫자를 입력하세요   : ";
	cin >> x;
	while (1)
	{
		cout << "연산자를 입력하세요 : ";
		cin >> operator;
		cout << "숫자를 입력하세요   : ";
		cin >> y;

		switch (operator)
		{
		case '+':
			c.Plus(x, y);
			break;
		case '-':
			c.Minus(x, y);
			break;
		case '*' :
			c.Multi(x, y);
			break;
		case '/':
			c.Division(x, y);
			break;
		default:
			cout << "연산자를 잘못 입력하셨습니다." << endl;
		}
		cout << "--------------------------------------\n";
		cout << "▶결과 : " << c.getResult() << endl;
		cout << "--------------------------------------\n";

		char continue_pro;
		cout << "연산을 계속 진행하시겠습니까? (Y=계속, I:초기화,E:종료) : ";
		cin >> continue_pro;
		switch (continue_pro)
		{
		case 'Y':
			x = c.getResult();
			break;
		case 'I':
			x = 0;
			break;
		case 'E':
			return -1;
		}
	}

	return 0;
}