#include <iostream>
using namespace std;

class Person
{
//protected :
	string name;
	int age;
public :
	Person(int age, string name)
	{
		this->age = age;
		this->name = name;
	}
	void sleep()
	{
		cout << "���� ���ڱ�" << endl;
	}
	int override_test(int num)
	{
		return num;
	}
	int get_age()
	{
		return age;
	}
};

class Student : public Person
{
	string stu_id;
public :
	Student(int age, string name, string stu_id) : Person(age, name)
	{
		this->stu_id = stu_id;
	}
	void study()
	{
		cout << "�����ϱ�" << endl;
	}
//*****************************************************
//�޼ҵ��� �������̵��� �Ͼ -> �Լ��� ������ ����.
//�Լ� �̸�, �Ű�����, �Ű����� ����, �������� ����.
//��Ӱ��迡���� ���´�!!
	void sleep()
	{
		cout << "�ʰ� ���ڱ�" << endl;
	}
	int override_test(int num)
	{
		return num+ get_age();
	}
//<�������̵� �ذ��>
//1. getter�� ���� private ������ �����´�.
	//getter : Ŭ�������� �ִ� �����̺� ������ �ܺο��� ����� �� �ֵ���
	//setter : Ŭ�������� �ִ� �����̺� ������ �ܺο��� �ʱ�ȭ �� �� �ֵ���
//2. private�� protected�� �ٲ۴�.
};

int main()
{
	Person p = Person(28,"ó��");
	p.sleep();
	Student s = Student(28, "ó��", "23-1234");
	s.sleep();
	cout<< s.override_test(3);

	return 0;
}