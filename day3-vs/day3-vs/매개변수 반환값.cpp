using namespace std;

//함수 문법 / 함수 선언
//매개변수 여부(괄호안에 뭐가있어야한다 타입 상관x), 반환값의 여부(제일 마지막에 적어준다)
//1. 매개변수 x return x
//리턴타입:int, string, float -> void
//void test_1() {
//	cout << test_1()
//}
	
//2. 매개변수 0 return x
//void test_2(int num, string str, int num3) {}

//3. 매개변수 0 return 0
//string test_3(int num, string str) {
//조건문, 명령문
//return "test"
//}
	
//4. 매개변수 x return 0 //리턴값이 있으니 void x
//int test_4() {
//cout << "tset_4 : 매개변수 x return 0";
//cout << "안녕";
//return 5;
//}
	
	//함수의 호출
		int main() {
			test_1();
			test_2(1, "str");
			//인자(1,str)
			int num = 5;
			string str = "str";
			test_3(num, str);
			test_4();  //=결국엔 5가 온다 리턴값이 5이므로...
	}
	
		매개변수는 함수의 외부에서 사용되는 값을 내부에서.
		리턴값은 내부에서 얻은 값을 함수의 외부에서 사용하고 싶을때

	두 개의 정수를 매개 변수로 받아 그 곱을 리턴하는 multiple함수를 만드세요

	//타입 3--------------------------------------------------------------------
	int multiple(int num1, int num2) {//두 개의 정수를 매개 변수로 받아
	//	int result = num1 * num2;
	//	return result;
		return num1 * num2;//그곱을 리턴하는 함수
	}
	
	int main() {//멀티플을 활용하여 출력하는 코드.
		cout << multiple(4, 5);
	}
	
	//두개의 정수를 매개변수로 받아 그곱을 출력하는 함수를 만드세요
	//void multiple(int num1, int num2) {
	//	cout << num1 * num2;
	//}