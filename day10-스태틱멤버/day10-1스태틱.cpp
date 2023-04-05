#include <iostream>
using namespace std;

//-------------------스태틱 변수----------------------------------
//스태틱변수 : 선언하고 초기화해야한다.
//특징 : 객체를 만들지 않아도 클래스를 통해 접근가능하다.
//class Person
//{
//public:
//	static int static_var; //스태틱 멤버가 된다.
//	string name;
//};
//int Person::static_var = 0; //스태틱변수는 초기화가 필요하다.
//
//int main()
//{
//	Person::static_var = 1;
//	Person p;
//	p.name = "홍길동";
//	p.static_var = 2;
//	cout << p.static_var << endl;
//	Person p2;
//	p2.name = "성춘향";
//	p2.static_var = 5;
//
//	cout << p.name<< " " << p2.name << endl;
//	cout << p.static_var << " " << p2.static_var << endl;
//}

//-------------------스태틱 메소드---------------------------------
//class Person
//{
//public:
//	static int static_var; //스태틱 멤버가 된다.
//	string name;
//
//	void sleep()
//	{
//		name = "posco";
//	}
//	static void static_method()
//	{
//		//this->name = "aaaa"; //일반 멤버는 메모리가 할당됐는지 보장 못한다.
//		//일반 멤버들의 메모리 할당 타이밍은 객체가 생성될 때 메모리를 할당받는다.
//		//그래서 객체 없이는 멤버에 접근 할 수 없다.
//		static_var = 5;
//		cout << "static_method" << endl;
//	}
//};
//int Person::static_var = 0; //스태틱변수는 초기화가 필요하다.
//
//int main()
//{
//	Person::static_var = 1;
//	cout << Person::static_var << endl; // => 1
//	Person::static_method();
//	cout << Person::static_var << endl; //=> 5
//}

//-------------스태틱이 쓰이는 예시---------------------------------
//person p; , person p2 ... 객체가 총 몇개 생겼는지 알수 있을까?
class Person
{
	static int count;
	string name;
public:
	Person(string name)
	{
		this->name = name;
		plusCount();
	}
	void plusCount()
	{
		count++;
	}
	static int getCount()
//static을 안써도되지만 static을 안쓰면 p.getCount로 써야한다.
//static은 클래스를 안거치고 꺼낼 수 있다.
	{
		return count;
	}
};
int Person::count = 0;
int main()
{
	Person p1("김소연");
	Person p2("정제철");
	Person p3("김새령");
	cout << Person::getCount();
}
