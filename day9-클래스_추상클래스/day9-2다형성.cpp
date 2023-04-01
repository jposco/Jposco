#include <iostream>
using namespace std;

////------------클래스의 특징 : 다형성(1)------------------------
//class Shape
//{
//	int line_num=99;
//public :
//	int getLineNum()
//	{
//		return line_num;
//	}
//};
//class Rect : public Shape
//{
//	int height;
//public:
//	int getHeight()
//	{
//		return height;
//	}
//};
//
//int main()
//{
////상위클래스 인스턴스로 하위클래스 인스턴스를 생성할 수 있다.
//	Shape shape = Rect(); //다형성 shape를 선언하고 Rect()를 담을 수 있다.
//	cout << shape.getLineNum();
//
//	//Rect rect = Shape(); // -> X 작은 범위에서 큰범위로 담을 수는 없다.
//
////부모클래스의 자료형으로 인스턴스를 만들면 자식클래스로 접근이 불가능하다
//	//cout << shape.getHeight(); // -> X
//}


////------------클래스의 특징 : 다형성(2)------------------------
class Shape {
	int line_num;
public:
	Shape(int line_num) {
		this->line_num = line_num;
	}
	int getLineNum() {
		return line_num;
	}
};

class Rect : public Shape {
public:
	int height;
public:
	Rect(int height) : Shape(4) { //높이를 입력받고 shape에 4를 넣는다
		this->height = height;
	}
	int getHeigth() {
		return height;
	}
};

class Tria : public Shape {
public:
	Tria() : Shape(3) {//높이를 입력받고 shape에 4를 넣는다
	}
	// Tria() : Shape(){  }
};

int main() {
	Shape shape = Rect(5);
	cout << shape.getLineNum() << endl;
	//5를 넣으면 Shape에 4가 들어가서 -> 4출력

	Shape shapes[2] = { Rect(5), Tria() };
	//1. 2개의 크기 배열에 Rect 5를 넣고 Tria를 비운다
	cout << shapes[0].getLineNum() << endl;
	//2. Rect(5)를 넣고 LineNum을 출력하면 5->4 출력
	cout << shapes[1].getLineNum() << endl;
	//3. Tria를 호출하면 Shape에 3이 들어가서 LineNum -> 3 출력


	//cout << shape.getHeigth() << endl; //

	//Rect rect = Shape(); // 안됨

	return 0;
}