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
			cout << "���� ����, �غ��� ����, ���α��̸� �Է��ϼ���.";
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
				cout << "�̷� ������ �����ϴ٤Ф�" << endl;
			}
			else
			{
				cout<< "���������ʹ� ���̹��� �ĺ�����^^";
				break;
			}
		}
		return 0;
	}
	//--------����---------------------------------------------------
	// ��� �ǽ� 1��

	class Shape {
	protected:
		int line_num; // ���� ����
		int length; // �غ��� ����

	public:
		Shape(int line_num, int length) {
			this->line_num = line_num;
			this->length = length;
		}

		void printInfo() {
			cout << "���� ������ : " << line_num << endl;
			cout << "�غ��� ���̴� : " << length << endl;
		}
	};

	class Rectangle : public Shape {
		int heigth; // ���� ����
	public:
		// ��� 1
		//Rectangle(int length, int heigth) : Shape(){
		//	this->line_num = 4;
		//	this->length = length;
		//	this->heigth = heigth;
		//}

		//��� 2
		Rectangle(int length, int heigth) : Shape(4, length) {
			this->heigth = heigth;
		}
		void area() {
			cout << "���̴�: " << heigth * length << endl;
		}
	};

	class Triangle : public Shape {
		int heigth; // ����
	public:
		Triangle(int length, int heigth) : Shape(3, length) {
			this->heigth = heigth;
		}

		void area() {
			cout << "���̴�: " << (double)heigth * length / (double)2 << endl;
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