#pragma once

#ifndef __CHOCO_H__
#define __CHOCO_H__
#include "Snack.h"

class Choco : public Snack {
	string shape;
public:
	Choco(string shape, string name);
	string getName2();
};



#endif