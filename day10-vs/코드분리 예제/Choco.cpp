#include "Choco.h"


Choco::Choco(string shape, string name) : Snack(name) {
		this->shape = shape;
	}
	string Choco::getName2()
	{
		string i = shape + "¸ð¾ç" + getName();
		return i;
	}
