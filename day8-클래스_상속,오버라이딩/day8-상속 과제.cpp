#include <iostream>
using namespace std;

class Shape
{
protected:
	int side_num;
	int base_length;
public :
	Shape(int side_num, int base_length) {
		this->side_num = side_num;
		this->base_length = base_length;
	};

	void printInfo()
	{
		cout << side_num << base_length << endl;
	}
};
class Rectangle : public Shape
{
	int y_length;
public:
	Rectangle(int side_num, int base_length, int y_length) : Shape(side_num, base_length)
	{
		this->y_length = y_length;
	}
	void area()
	{
		cout << "Rectangle : " << base_length * y_length << endl;
	}
};

	class Triangle : public Shape
	{
		int high_length;
	public:
		Triangle(int side_num, int base_length, int high_length) : Shape(side_num, base_length)
		{
			this->high_length = high_length;
		}
		void area()
		{
			cout << "Triangle : " << (base_length * high_length) / 2 << endl;
		}
	};
	int main() {
		int x, y, z;

		while (1) {
			cout << "변의 갯수, 밑변의 길이, 세로길이를 입력하세요.";
			cin >> x >> y >> z;

			if (x == 4)
			{
				Rectangle r = Rectangle(x, y, z);
				r.area();
			}

			else if (x == 3)
			{
				Triangle t = Triangle(x, y, z);
				t.area();
			}
			else if(x<3)
			{
				cout << "이런 도형은 없습니다ㅠㅠ" << endl;
			}
			else
			{
				cout<< "오각형부터는 네이버에 쳐보세여^^";
				break;
			}
		}
		return 0;
	}
	//--------답지---------------------------------------------------
	// 상속 실습 1번

	class Shape {
	protected:
		int line_num; // 변의 개수
		int length; // 밑변의 길이

	public:
		Shape(int line_num, int length) {
			this->line_num = line_num;
			this->length = length;
		}

		void printInfo() {
			cout << "변의 개수는 : " << line_num << endl;
			cout << "밑변의 길이는 : " << length << endl;
		}
	};

	class Rectangle : public Shape {
		int heigth; // 세로 길이
	public:
		// 방법 1
		//Rectangle(int length, int heigth) : Shape(){
		//	this->line_num = 4;
		//	this->length = length;
		//	this->heigth = heigth;
		//}

		//방법 2
		Rectangle(int length, int heigth) : Shape(4, length) {
			this->heigth = heigth;
		}
		void area() {
			cout << "넓이는: " << heigth * length << endl;
		}
	};

	class Triangle : public Shape {
		int heigth; // 높이
	public:
		Triangle(int length, int heigth) : Shape(3, length) {
			this->heigth = heigth;
		}

		void area() {
			cout << "넓이는: " << (double)heigth * length / (double)2 << endl;
		}
	};


	int main() {
		Rectangle r = Rectangle(5, 3);
		r.printInfo();
		r.area();

		Triangle t = Triangle(3, 3);
		t.printInfo();
		t.area();

		return 0;
	}