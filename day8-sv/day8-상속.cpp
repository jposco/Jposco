#include <iostream>
using namespace std;

////---------클래스의 이해---------------------------------------------
//class Person { //Student의 부모 클래스, 슈퍼 클래스, 상위 클래스
//	string name;
//	int age;
//	// 필드, 메소드, 생성자
//public: // private, protected
//	//Person() { return ???; } // 기본 생성자
//	Person(string name) { this->name = name; }
//	//->Person p = Person("김소연");
//	Person() {}
//	//->Person p = Person();
//	void sleep() { cout << "잠자기 zzzz"; }
//};
//
//class Student : public Person { //Person의 자식 클래스, 서브 클래스, 하위 클래스
//	//    string name;
//	//    int age;
//	//public:  // private, protected
//	//    void sleep() { cout << "잠자기 zzzz"; }
//	// 생략가능
//	
//	// 본인(Student) 생성자에서 부모의 생성자를 호출함.
//	// Student 생성자를 작성하지 않았다는 건. 
//	// Student 기본생성자를 호출하고 부모의 기본생성자를 호출하게 됨.
//public:
//	//Student 생성자를 작성하지 않은 경우
//	//Student(){ Person(); }
//	void study() {
//		sleep();//호출
//		cout << "공부하기";
//	}
//};

//int main()
// {
//	Person p = Person();// 객체를 생성하는 순간.
//
//	Person p = Person("김소연"); 
//
//	//Person p = Person(1,3); -> X
//
//	//Student s = Student();
//
//	return 0;
//}



//---------상속에 대한 이해------------------------------------------------------
//class Person { //Student의 부모 클래스, 슈퍼 클래스, 상위 클래스
//	string name;
//	int age;
//public:
//	//Person() { } // 기본 생성자
//	Person(string name,int age) 
//	{
//		this->name = name; 
//		this->age = age;
//	}
//};
//
//class Student : public Person { //Person의 자식 클래스, 서브 클래스, 하위 클래스
//	string stu_id;
//public:
//	//Student 생성자를 작성하지 않은 경우
//	//Student(){ Person(); }
//	
//	//Stident 생성자를 작성한 경우
//	Student(string name, int age) : Person(name, age) //부모 클래스의 생성자를 선택할 예정
//	{
//		//부모클래스의 생성자를 직접 선택함.
//		this->stu_id = "23-1234"; // Student private 값이라서 Student에서만 이용한다.
//		//return 값;
//	}	
//};
//int main() {
//	Person p = Person("김소연");
//	return 0;
//}



//---------Protected의 이해------------------------------------------------------
 //1. Public : 공개된 정보. 외부 접근 허용
 //2. Pritected : 제한된 정보. 해당 클래스나서브 클래스에서만 접근 허용
 //3. Private : 제한된 정보. 해당 클래스에서만 접근 허용

class Person {
	string name;
	int age;
public :
	//Person() { } // 기본 생성자
	Person(string name, int age)
	{
		this->name = name;
		this->age = age;
	}
	void sleep() { cout << "잠자기"; }
};

//**********상속의 기본 문법*****************
class Student : public Person {
	//*****public : 부모 클래스에서 상속받은 멤버들의 접근제어자의 한계를 지정함.
	string stu_id;
public:
	//**********상속의 기본 문법*******************
	Student(string name, int age) : Person(name, age) 
	{
		this->stu_id = "23-1234"; // Student private 값이라서 Student에서만 이용한다.
		//return 값;
	}
};
int main() {
	//Person p = Person("김소연", 35);
	Student s = Student("김소연", 35);
	s.sleep();
	return 0;
}

//--------------강사님의 코드내역-----------------------
#include <iostream>

using std::cout;
using std::cin;
using std::string;
using std::endl;

//private 자기 자신(해당 클래스 내)에서만 접근 가능
//protected 라는 자료형 : 자기 자신과, 자식 클래스에서 접근 가능
//public 모든곳에서 접근 가능
class Person { //Student의 부모 클래스, 슈퍼 클래스, 상위 클래스
protected:
	string name;
	int age;
	// 필드, 메소드, 생성자
public: // private, protected
	//Person() { return ???; } // 기본 생성자
	Person(string name, int age) {  //  객체 생성 할 때 이름 나이 넣으면 여기로 온다
		this->name = name;			//
		this->age = age;			//
	}								//
	Person() {}                     //  객체 생성할때 그냥 넣으면 된다
	/*Person(int age) {				//
	}*/								//
	//Person p = Person("김소연");	//
	//Person() {}					//
	//Person p = Person();			//
	void sleep() { cout << "잠자기 zzzz"; }
};

class Student : public Person {
	// 부모 클래스에서 상속받은 멤버들의 접근제어자의 한계를 지정함.
	string stu_id;
protected:
	string name;
	int age;
public:
	//Student 생성자를 작성하지 않은 경우. 기본 형태
	//Student(){ Person(); ~~~~~; return; }
	Student(string name, int age) : Person(name, age) {
		//this->name = name;
		//this->age = age;
		//부모클래스의 생성자를 선택함.
		this->stu_id = "11111111111";
		//return 값;
	}
	void study() {
		sleep();
		cout << "공부하기";
	}
};

int main() {
	//Person p = Person("김소연"); // 객체를 생성하는 순간.
	//Person p = Person();

	//Person p = Person(1,3);
	Student s = Student("소연짱", 28);
	s.sleep();

	return 0;
}