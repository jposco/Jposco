#include <iostream>
using namespace std;

class Person
{
public:
	void test()
	{
		cout << "부모 클래스 test" << endl;
	}
};
class Student : public Person
{
public:
	void test()
	{
		cout << "자식 클래스 test" << endl;
	}
};

int main()
{
	Student s; //자식클래스 s 선언    
	Person* p2 = &s; // 업캐스팅      
	p2->test();           // => 부모 클래스

	Person* p3 = new Student(); //동적메모리 선언 업캐스팅
	p3->test();// => 부모 클래스
	delete p3; //동적메모리 해제도 해야한다.


	//------------다운캐스팅----------------------------------------------------
	//업캐스팅 된 것을 다시 원상태로 돌리는것 , 먼저 업캐스팅이 수반되어야 한다.

	Person* p4 = new Student(); //동적메모리 선언, 업캐스팅
	p4->test();  // => 부모 클래스
	//p4->test_stu();//불가능
	Student* stu = (Student*)p4;// 다운 캐스팅
	//p3는 'Person의 포인터'로 생성되어있는데, 그것을 원래대로 'Student의 포인터'로 복구시킨다.
	p4->test();  // => 부모 클래스
	//p4->test_stu();//불가능
	stu->test(); 		  // => 부모 클래스
	stu->test_stu();	  // => 자식 클래스
	delete p4; //동적메모리 해제도 해야한다.

}
