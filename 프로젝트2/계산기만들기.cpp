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
		cout << "����� : " << resultNum << endl;
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
		cout << "+ , - , / , * �����ڸ� �Է����ּ���." << endl;
		break;
	}
}

	int main()
	{
		double x = 0, y = 0;		

		cout << "���ڸ� �Է��ϼ���   : ";
		cin >> x;
		while (1)
		{
			char operate;
			cout << "�����ڸ� �Է��ϼ��� : ";
			cin >> operate;
			cout << "���ڸ� �Է��ϼ���   : ";
			cin >> y;
			function(x, operate, y);

			char continue_pro;
			cout << "������ ��� �����Ͻðڽ��ϱ�? (Y=���, I:�ʱ�ȭ,E:����) : ";
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