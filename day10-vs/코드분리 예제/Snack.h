#pragma once 

#ifndef __SNACK_H__
#define __SNACK_H__
#include <iostream>
#include <vector>
using namespace std;
class Snack {
	string name;
	static int count;

public:
	Snack(string name);
	void plusCount();
	static int getCount();
	string getName();
};

#endif