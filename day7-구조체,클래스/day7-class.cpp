#include <iostream>

using namespace std;

//-------------클래스의 기본----------------------------------------------------------------------
class Person { //객체는 "상태"와 "동작"을 가지고 있다.
	string name; //필드(변수)
	int age;     //필드(변수)
public: //접근 제어자
	Cat(string name, int age) { //생성자
		this->name = name;
		this->age = age;
		cout << name << " 고양이가 태어났습니다!\n";
	}
	void mew() { //메소드
		cout << "냐옹\n";
	}
};

int main() {
	Cat cat1("나비", 5);

	cat1.mew();
}
//-------------------------------------------------------------------------------------------------
class Cat {
	string name;
	int age;
public:
	Cat(string name, int age) {
		this->name = name;
		this->age = age;
		cout << name << " 고양이가 태어났습니다!\n";
	}
	string getName() { //변수를 반환해주는 메소드
		return name;
	}	
	void setName(string name) {    //변수에 값을 할당해주는 메소드
		this->name = name;
	}
	void mew() {
		cout << "냐옹\n";
	}
};

int main() {
	Cat cat1("나비", 5);

	cout << cat1.getName() << endl; //getter => 나비
	cat1.setName("도라에몽"); //setter 
	cout << cat1.getName(); //=> 도라에몽
}

//나비 고양이가 태어났습니다
//나비 
//도라에몽