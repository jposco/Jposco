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
		cout << "���Դϴ�." << endl;
	}
};

class Rect : public Shape
{
public:
	void draw()
	{
		cout << "�簢���Դϴ�." << endl;
	}
};

class Tria : public Shape
{
public:
	void draw()
	{
		cout << "�ﰢ���Դϴ�." << endl;
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