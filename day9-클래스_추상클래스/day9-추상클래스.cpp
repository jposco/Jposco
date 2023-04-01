#include <iostream>
using namespace std;
//--------------------추상클래스------------------------------------
class Person 
{
public :
	virtual void sleep() = 0;
	virtual void eat() = 0;
	//추상클래스는 인스턴스(객체)를 생성할 수 없다.
	//쓰는 이유 : 이메소드를 모든 클래스에서 구현해야한다. *강제성*
};

//****추상클래스를 상속받는 자식 클래스는 추상메소드를 '구현'해야한다.****
class Student : public Person
{
	//'구현' 하는 법 : 오버라이딩하여 덮어써준다.
public:
	void sleep()//추상메소드를 오버라이딩해서 덮어써줬다.
	{
		cout << "구현 테스트 : 잠은 필수다." << endl;
	}
	void eat()//추상메소드를 오버라이딩해서 덮어써줬다.
	{
		cout << "구현 테스트 : 식은 필수다." << endl;
	}
};

int main()
{
	//Person p = Person(); -> Error 발생
	//이유 : Person()이 추상 클래스이기 때문에

	//추상메소드 오버라이딩 하기전
	//Student s = Student(); ->Error 발생
	//이유1 : Student()의 부모클래스가 추상 클래스이기 때문에
	//이유2 :추상 메소드를 구현하지 않았기 때문이다.

	//추상메소드 오버라이딩 하고 난 후
	Student s = Student();
	s.sleep();
	// = 구현 테스트 : 잠은 필수다.
	s.eat();
	// = 구현 테스트 : 식은 필수다.

	return 0;
}