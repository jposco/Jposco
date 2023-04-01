#include <iostream>
using namespace std;

//클래스는 필드, 메소드, 생성자, 소멸자로 구성됨.
//생성자 : 객체가 생성될 때 자동으로 실행되는 메소드
//소멸자 : 객체가 소멸될 때 자동으로 실행되는 메소드

////------------소멸자-----------------------------------
//class Person {
//public:
//	Person() {
//		cout << "생성자 입니다" << endl;
//	}
//
//	~Person() {
//		cout << "소멸자 입니다" << endl;
//	}
//};
//
//int main() {
//	Person p; // 생성자입니다.
//	// 정적 메모리
//	// 스택영역에 저장됨. 해제를 명시적으로 할 필요 X
//	// 자동으로 해제되는데, main함수가 닫힐 때
//	Person* p2 = new Person(); // 생성자입니다.
//	// 동적 메모리
//	// 힙영역에 저장됨. 해제를 명시적으로 할 필요 O
//	// 언제 ? 필요없을 때 delete
//	delete p2; // 소멸자입니다.
//
//	cout << "메인함수 차례입니다" << endl;
//
//	// 소멸자입니다. ( p에 대한 소멸자 )
//	return 0;
//
//	//생성자 입니다
//	//생성자 입니다
//	//소멸자 입니다
//	//메인함수 차례입니다
//	//소멸자 입니다
//}


//-----------상속관계에서의 소멸자-----------------------
//
//class Person {
//public:
//	Person() {
//		cout << "Person 생성자 입니다" << endl;
//	}
//
//	~Person() {
//		cout << "Person 소멸자 입니다" << endl;
//	}
//};
//
//class Student : public Person {
//public:
//	Student() : Person() {
//
//		cout << "Student 생성자 입니다" << endl;
//	}
//	~Student() {
//		cout << "Student 소멸자 입니다" << endl;
//	}
//};
//
//int main() {
//	Student s = Student();
//	//Person 생성자 입니다
//	//Student 생성자 입니다
//
//	Student* s2 = new Student();
//	//Person 생성자 입니다
//	//Student 생성자 입니다
//
//	delete s2;
//	//Student 소멸자 입니다
//	//Person 소멸자 입니다
//	cout << "안녕?" << endl;
//
//	//Student 소멸자 입니다
//	//Person 소멸자 입니다
//
//	return 0;
//}

//------------------가상함수------------------------------
//
//
//class Person {
//public:
//	Person() {
//	}
//	//가상함수 : 부모클래스에서 정의될 예정.
//	//자식클래스가 재정의(오버라이딩) 할 것이라고 기대하는 함수
//	//순수 가상함수 : 구현이 안되어 있는 함수 (= 0)
//	//virtual void sleep() = 0; -> 순수 가상함수
//	virtual void sleep() //가상 함수 : 동적 바인딩을 하기 위해
//		//동적바인딩: 런타임때
//	{
//		cout << "잠자기" << endl;
//	}
//
//	~Person() {		
//	}
//};
//
//class Student : public Person {
//public:
//	Student() : Person() {
//	}
//	void sleep() //가상함수를 재정의(오버라이딩) 한 것.
//	{
//		cout << "학생은 10시에 잠자기" << endl;
//	}
//	~Student() {
//	}
//};
//
//int main() {
//	Student s = Student();
//	s.sleep(); //정적바인딩
//
//		//학생은 10시에 잠자기
//	/*Person p = Student();
//	p.sleep();
//	//잠자기*/
//	Person* s2 = new Student(); //업캐스팅
//	//Person가서 본다 -> 어? 버츄얼이네? -> 자식클래스에서 재정의하고 있나 ? 확인한다.
//	//-> 어 재정의 하고있네. -> 그럼 자식클래스를 읽는다.
//	s2->sleep(); 
//		//학생은 10시에 잠자기
//	
//	//-> 어 재정의가 없네. -> 그럼 부모클래스를 읽는다.
//		//잠가기
//		
//-------------가상함수의 소멸자--------------------------------------------
class Person {
public:
	Person() {
		cout << "Person 생성자 입니다" << endl;
	}
	virtual void sleep() { //가상 함수 : 동적 바인딩을 하기 위해
		cout << "잠자기" << endl;
	}

	virtual ~Person() {
		cout << "Person 소멸자 입니다" << endl;
	}
};

class Student : public Person {
public:
	Student() : Person() {
		cout << "Student 생성자 입니다" << endl;
	}
	void sleep() { //가상 함수를 재정의(오버라이딩)한 것
		cout << "학생의 잠자기" << endl;
	}
	~Student() {
		cout << "Student 소멸자 입니다" << endl;
	}
};

int main() {
	Student s = Student();
	//Person 생성자 입니다
	//Student 생성자 입니다

	s.sleep(); // 정적 바인딩 
	// 10시에 잠자기

	Person* s2 = new Student(); //업캐스팅
	//Person 생성자 입니다
	//Student 생성자 입니다

	s2->sleep(); //동적 바인딩
	// 10시에 잠자기

	delete s2;
	//Student 소멸자 입니다
	//Person 소멸자 입니다

	cout << "안녕하세요" << endl;
	//안녕하세요
	
	//Student 소멸자 입니다
	//Person 소멸자 입니다
	return 0;
}
/*Person 생성자 입니다
Student 생성자 입니다
학생의 잠자기
Person 생성자 입니다
Student 생성자 입니다
학생의 잠자기
Student 소멸자 입니다
Person 소멸자 입니다
안녕하세요
Student 소멸자 입니다
Person 소멸자 입니다*/



