#include <iostream>
using namespace std;

class Shape
{
protected:
	virtual void draw() = 0;
};

class Circle : public Shape
{
public:
	void draw()
	{
		cout << "원입니다." << endl;
	}
};

class Rect : public Shape
{
public:
	void draw()
	{
		cout << "사각형입니다." << endl;
	}
};

class Tria : public Shape
{
public:
	void draw()
	{
		cout << "삼각형입니다." << endl;
	}
};

int main()
{
	Circle c = Circle();
	c.draw();
	Rect r = Rect();
	r.draw();
	Tria t = Tria();
	t.draw();

}