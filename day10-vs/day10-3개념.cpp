#include <iostream>
#include <vector>
using namespace std;

class Person
{
	string name;
	vector<string> Nm;
	static int count;
	string sum;
public:
	Person(string name)
	{
		this->name = name;
		plusName();
	}
	void plusName()
	{
		Nm.push_back(name);
		count++;
	}
	string getname()
	{
		for (int i = 0; i < Nm.size(); i++)
		{
			sum += Nm.at(i);
		}
		return sum;
	}
	static int getCount()
	{
		return count;
	}

};
int Person::count = 0;

int main()
{
	string name;
	while (1) {
		cout << "���忡 ���� ~ ";

		cin >> name;
		Person p = Person(name);
		cout << p.getname();

		if (name == p.getname())
		{
			cout << "gg";
			break;
		}
	}
	cout << "��������! �� " << Person::getCount() << "�� �����ϼ̽��ϴ�.";
}