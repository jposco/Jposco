// main.cpp
#include <iostream>
#include "Person.h"
#include "Student.h"

// #include <> // .h X, ���� ������ ���� ����
// #include "" // ���� ���� ����
using std::cout;
using std::cin;
using std::string;
using std::endl;

int main() {
	Person p("��ҿ�");
	Person p2("ä����");

	cout << "�ο� : " << Person::getCnt() << endl;

	Student s("ȫ�浿");

	cout << "�ο� : " << Person::getCnt() << endl;
	return 0;
}