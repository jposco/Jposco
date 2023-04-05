#pragma once

#ifndef __CANDY_H__
#define __CANDY_H__
#include "Snack.h"

//class Student : public Person {
//public:
//	Student(string name);
//};

class Candy : public Snack {
	string flavor;
public:
	Candy(string flavor, string name);
	string getName1();
};
#endif