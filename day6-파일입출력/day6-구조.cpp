#include <iostream>
using namespace std;

//-------구조체에 대해 알아보기----------------------------------
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
//	cout << "x좌표 :" << p.x << ", " << "y좌표 : " << p.y << endl;
//}

//--------실습1 구조체 사용해보기 ----------------------------
struct rectangle {
	double x = 0;
	double y = 0;
};
int main()
{
	rectangle r;
	double x, y,result;

	cout << "가로, 세로 길이를 입력하세요 :";
	cin >> r.x >> r.y;
	
	result = r.x * r.y;
	cout << "넓이는 ? :" << result;
}