#include <iostream>
using namespace std;

////------------Ŭ������ Ư¡ : ������(1)------------------------
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
////����Ŭ���� �ν��Ͻ��� ����Ŭ���� �ν��Ͻ��� ������ �� �ִ�.
//	Shape shape = Rect(); //������ shape�� �����ϰ� Rect()�� ���� �� �ִ�.
//	cout << shape.getLineNum();
//
//	//Rect rect = Shape(); // -> X ���� �������� ū������ ���� ���� ����.
//
////�θ�Ŭ������ �ڷ������� �ν��Ͻ��� ����� �ڽ�Ŭ������ ������ �Ұ����ϴ�
//	//cout << shape.getHeight(); // -> X
//}


////------------Ŭ������ Ư¡ : ������(2)------------------------
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
	Rect(int height) : Shape(4) { //���̸� �Է¹ް� shape�� 4�� �ִ´�
		this->height = height;
	}
	int getHeigth() {
		return height;
	}
};

class Tria : public Shape {
public:
	Tria() : Shape(3) {//���̸� �Է¹ް� shape�� 4�� �ִ´�
	}
	// Tria() : Shape(){  }
};

int main() {
	Shape shape = Rect(5);
	cout << shape.getLineNum() << endl;
	//5�� ������ Shape�� 4�� ���� -> 4���

	Shape shapes[2] = { Rect(5), Tria() };
	//1. 2���� ũ�� �迭�� Rect 5�� �ְ� Tria�� ����
	cout << shapes[0].getLineNum() << endl;
	//2. Rect(5)�� �ְ� LineNum�� ����ϸ� 5->4 ���
	cout << shapes[1].getLineNum() << endl;
	//3. Tria�� ȣ���ϸ� Shape�� 3�� ���� LineNum -> 3 ���


	//cout << shape.getHeigth() << endl; //

	//Rect rect = Shape(); // �ȵ�

	return 0;
}