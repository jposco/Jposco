#include <iostream>
using namespace std;

class Calculator
{
protected:
	static double resultNum;
public:
	void cal()
	{
		cout << "--------------------------------------------------" << endl;
		cout << "▶결과 : " << resultNum << endl;
		cout << "--------------------------------------------------" << endl;
	}
	static double getResult()
	{
		return resultNum;
	}
};

class Plus : public Calculator {
	double x = 0;
	double y = 0;
public:
	Plus(double x, double y) :Calculator()
	{
		this->resultNum = x + y;
		cal();
	}
};

class Minus : public Calculator {
	double x = 0;
	double y = 0;
public:
	Minus(double x, double y) :Calculator()
	{
		this->resultNum = x - y;
		cal();
	}

};

class Multi : public Calculator {
	double x = 0;
	double y = 0;
public:
	Multi(double x, double y) :Calculator()
	{
		this->resultNum = x * y;
		cal();
	}
};

class Division : public Calculator {
	double x = 0;
	double y = 0;
public:
	Division(double x, double y) :Calculator()
	{
		this->resultNum = x / y;
		cal();
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
}

	int main()
	{
		double x = 0, y = 0;		

		cout << "숫자를 입력하세요   : ";
		cin >> x;
		while (1)
		{
			char operate;
			cout << "연산자를 입력하세요 : ";
			cin >> operate;
			cout << "숫자를 입력하세요   : ";
			cin >> y;
			function(x, operate, y);

			char continue_pro;
			cout << "연산을 계속 진행하시겠습니까? (Y=계속, I:초기화,E:종료) : ";
			cin >> continue_pro;
			switch (continue_pro)
			{
			case 'Y':
				x = Calculator::getResult();
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