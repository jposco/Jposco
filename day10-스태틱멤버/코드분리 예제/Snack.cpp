#include "Snack.h"

//class, public, static ���������� ~
// 
//int Person::cnt = 0;
//Person::Person(string name) {
//	this->name = name;
//	plusCnt();
//}
//
//int Person::getCnt() {
//	return cnt;
//}
//
//void Person::plusCnt() {
//	cnt++;
//}
int Snack::count = 0;

	Snack::Snack(string name) {
		this->name = name;
		plusCount();
	}
	void Snack::plusCount()
	{
		count++;
	}
	int Snack::getCount()
	{
		return count;
	}
	string Snack::getName() {
		return name;
	}
