#include <iostream>
using namespace std;

//-------����ü�� ���� �˾ƺ���----------------------------------
//struct position {
//	int x = 0;
//	int y = 0;
//};
//int main()
//{
//	position p;
//	p.x = 3;
//	p.y = 5;
//
//	cout << "x��ǥ :" << p.x << ", " << "y��ǥ : " << p.y << endl;
//}

//--------�ǽ�1 ����ü ����غ��� ----------------------------
struct rectangle {
	double x = 0;
	double y = 0;
};
int main()
{
	rectangle r;
	double x, y,result;

	cout << "����, ���� ���̸� �Է��ϼ��� :";
	cin >> r.x >> r.y;
	
	result = r.x * r.y;
	cout << "���̴� ? :" << result;
}