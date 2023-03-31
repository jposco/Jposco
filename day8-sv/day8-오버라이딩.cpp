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
		cout << "일찍 잠자기" << endl;
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
		cout << "공부하기" << endl;
	}
//*****************************************************
//메소드의 오버라이딩이 일어남 -> 함수의 원형이 같다.
//함수 이름, 매개변수, 매개변수 종류, 갯수까지 같다.
//상속관계에서만 나온다!!
	void sleep()
	{
		cout << "늦게 잠자기" << endl;
	}
	int override_test(int num)
	{
		return num+ get_age();
	}
//<오버라이딩 해결법>
//1. getter를 만들어서 private 변수를 가져온다.
	//getter : 클래스내에 있는 프라이빗 변수를 외부에서 사용할 수 있도록
	//setter : 클래스내에 있는 프라이빗 변수를 외부에서 초기화 할 수 있도록
//2. private를 protected로 바꾼다.
};

int main()
{
	Person p = Person(28,"처루");
	p.sleep();
	Student s = Student(28, "처루", "23-1234");
	s.sleep();
	cout<< s.override_test(3);

	return 0;
}