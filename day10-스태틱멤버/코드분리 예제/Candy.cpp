#include "Candy.h"

//Student::Student(string name) : Person(name) {
//	std::cout << "Student ������" << std::endl;
//}


	Candy::Candy(string flavor, string name) : Snack(name) {
		this->flavor = flavor;
	}
	string Candy::getName1() {
		string j = flavor + "��" + getName();
		return j;
	}