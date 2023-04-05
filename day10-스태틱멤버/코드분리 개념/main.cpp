// main.cpp
#include <iostream>
#include "Person.h"
#include "Student.h"

// #include <> // .h X, 내가 만들지 않은 파일
// #include "" // 내가 만든 파일
using std::cout;
using std::cin;
using std::string;
using std::endl;

int main() {
	Person p("김소연");
	Person p2("채동현");

	cout << "인원 : " << Person::getCnt() << endl;

	Student s("홍길동");

	cout << "인원 : " << Person::getCnt() << endl;
	return 0;
}