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