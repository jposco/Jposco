#include <iostream>
using namespace std;

//-----과제1, 과제2-------------------------------------------------------------------------------
//class Rectangle //객체 상태와 동작을 가진다. 
//{  
//	int width;    //필드(변수) : 클래스 내에서 값을 저장하는 변수
//	int height;   //필드(변수) : 클래스 내에서 값을 저장하는 변수
//
//	public:    //접근 제어자 (상태의 개념)
//		Rectangle (int width, int height) //생성자(메소드):객체가 생성될 때 자동으로 호출되는 메소드
//		{
//			this->width = width;
//			this->height = height;
//		}
//		int getWidth() {
//			return width;
//		}
//		int getHeight() {
//			return height;
//		}
//		void setWidth(int width) {
//			this->width = width;
//		}		
//		void setHeight(int height) {
//			this->height = height;
//		}
//
//		int area() //메소드 : 클래스 내에 선언된 함수
//		{  
//			return width * height;
//		}
//};
//
//int main() {
//	int x, y;
//	cout << "사각형의 가로와 세로의 길이를 입력하세요 : ";
//	cin >> x >> y;
//
//	Rectangle Rectangle1(x, y);
//	cout <<"생성자 사용 출력 : " << Rectangle1.area() << endl;;
//
//	int getresult = 0;
//	getresult = Rectangle1.getWidth() * Rectangle1.getHeight();
//	cout << "Get써서 출력 : " << getresult << endl;
//
//	Rectangle1.setWidth(5);
//	Rectangle1.setHeight(6);
//
//	getresult = Rectangle1.getWidth() * Rectangle1.getHeight();
//	cout << "Set써서 출력 : " << getresult << endl;	
//}
