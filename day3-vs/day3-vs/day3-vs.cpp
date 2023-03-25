//#include <iostream>
//using namespace std;
//int main()
//{
	/*
//기본형
	int num;
	cout << "basic hello" << endl;
	cout << "what's your age?" << endl;
	cin >> num;
//if문
	if (num > 0 && num < 20) {//성인일 경우
		cout << "If hello" << endl;
	}
	else {
		cout << "else hello" << endl;
	}
for문( 초기값    조건문 증감문)
//횟수가 지정되어 있지 않을때
	for (int i = 0; i > -5; i--) {
		cout << "for hello" << endl;
	}
	cout << "for out hello" << endl;

//while문(조건문)
//횟수가 지정되어 있을 때
//조건문이 참일 경우 반복적으로 실행
	int j = 0;
	while (j < 5) {
		cout << "while hello" << endl;
		j++;
	}
	*/

//while 응용하기
////카페 키오스크 만들어보기
//	#include <iostream>
//
//	using namespace std;
//
//	int main()
//	{
//		cout << "-------------------------------------" << endl;
//		cout << "[    안녕하세요. 스타벅스입니다.    ]" << endl;
//		cout << "[    ▶  1. 아메리카노               ]" << endl;
//		cout << "[    ▶  2. 카페라떼                 ]" << endl;
//		cout << "[    ▶  3. 주문종료                 ]" << endl;
//		cout << "[    주문하실 번호를 선택해주세요.  ]" << endl;
//		cout << "-------------------------------------" << endl;
//
//
//		while (1) 
//		{
//			int order;
//			cin >> order;
//
//			if (order == 1) 
//			{
//				cout << "1. 아메리카노 주문하셨습니다."<<endl;
//			}
//			else if (order == 2) 
//			{
//				cout << "2. 카페라떼 주문하셨습니다." << endl;
//			}
//			else if (order == 3) 
//			{
//				cout << "3. 주문이 완료되었습니다." << endl;
//				break;
//			}
//			else 
//			{
//				cout << "1-3까지의 숫자만 입력해주세요." << endl;
//			}
//		}
//	}


	/*


//Do while 문
//do { 조건문;  i++ }while(i < 7);
// 1회는 무조건 통과 후에 while문으로 들어간다.
	int i = 0;
	do {
		cout << "DO while문 hello" << endl;
		i++;
	} while (i < 5);
	*/

	//구구단게임 만들기

		//cout << " 구구단을 풀어줄게." << endl;
		//cout << " 숫자 두개를 입력해봐" << endl;
		//int a, b;
		//cin >> a >> b:
		// 
		// 
	//구구단 1~9단 출력하기
		//int i, j;
		//cout << "1~9단 출력" << endl;
		//for (i = 1; i < 10; i++) {
		//	cout << "---" << i << "단---" << endl;
		//	for (j = 1; j < 10; j++) {
		//		
		//		cout << i << "x" << j << " = " << i * j << endl;
		//	}
		//}

	////실습2 1부터 n까지의 합구하기
	//	cout << "----실습 2 1부터 n까지의 합 구하기----" << endl;
	//	int num;
	//	cout << "숫자 (양의 정수를 입력하세요) : ";
	//	cin >> num;
	//	int j = 0;
	//	for (int i = 1; i < num+1 ; i++) {
	//		j=j+i;
	//	}
	//
	//	cout << "1부터 " << num << "까지의 합은 : " << j <<endl;

	////실습 3 while문 사용해보기
	////구구단 1~9단 출력하기
	//int i, j;
	//i = 1;
	////j = 1;
	//cout << "실습 3 - 1 " << endl;
	//	cout << "while을 이용한 1~9단 출력" << endl;
	//	while (i < 10) {
	//		cout << "---" << i << "단---" << endl;
	//		i++;
	//		for (j = 1; j < 10;j++) {
	//			
	//			cout << i << "x" << j << " = " << i * j << endl;
	//			
	//		}
	//	}

	////실습 3-2
	//cout << "---- 실습 3 - 2----" << endl;
	//cout << "while은 이용한  1부터 n까지의 합 구하기" << endl;
	//	int num;
	//	cout << "숫자 (양의 정수를 입력하세요) : ";
	//	cin >> num;
	//	int j = 0;
	//	int i = 1;
	//	while (i < num+1) {
	//		j=j+i;
	//		i++;
	//	}
	//
	//	cout << "1부터 " << num << "까지의 합은 : " << j <<endl;

	////실습 4 사용자가 입력한 숫자더하기
	//cout << " ----- 실습 4 ---- " << endl;
	//cout << "사용자가 입력한 숫자 더하기 " << endl;
	//
	//	int num;
	//	int j = 0;
	//	while(1){
	//		cout << "숫자를 입력하세요. (0 : 나가기) : ";
	//		cin >> num;
	//
	//		while(num1 != 0){
	//		j += num
	// 
	//
	//		if(num != 0){		
	//			j = j + num;
	//		}
	//		else {
	//			cout << " 사용자가 입력한 숫자의 합은 : " << j << endl;
	//			break;
	//		}
	//
	//
	//}
	//
	////함수 문법 / 함수 선언
	//매개변수 여부(괄호안에 뭐가있어야한다 타입 상관x), 반환값의 여부(제일 마지막에 적어준다)
	//1. 매개변수 x return x
	//	리턴타입:int, string, float -> void
	//	void test_1() {
	//cout << test_1()
	//}
	//2. 매개변수 0 return x
	//	void test_2(int num, string str, int num3) {}
	//3. 매개변수 0 return 0
	//	tring test_3(int num, string str) {
	//	조건문, 명령문
	//	return "test"
	//}
	//4. 매개변수 x return 0 리턴값이 있으니 void x
	//int test_4() {
	//	cout << "tset_4 : 매개변수 x return 0";
	//	cout << "안녕";
	//	return 5;
	//}
	//
	////함수의 호출
	//	int main() {
	//		test_1();
	//		test_2(1, "str");
	//		//인자(1,str)
	//		int num = 5;
	//		string str = "str";
	//		test_3(num, str);
	//		test_4();  //=결국엔 5가 온다 리턴값이 5이므로...
	//}
	//
	//	매개변수는 함수의 외부에서 사용되는 값을 내부에서.
	//	리턴값은 내부에서 얻은 값을 함수의 외부에서 사용하고 싶을때

	//두 개의 정수를 매개 변수로 받아 그 곱을 리턴하는 multiple함수를 만드세요

	////타입 3
	//int multiple(int num1, int num2) {//두 개의 정수를 매개 변수로 받아
	////	int result = num1 * num2;
	//	return num1 * num2;//그곱을 리턴하는 함수
	//}
	//
	//int main() {//멀티플을 활용하여 출력하는 코드.
	//	std::cout << multiple(4, 5);
	//}
	//
	////두개의 정수를 매개변수로 받아 그곱을 출력하는 함수를 만드세요
	//void multiple(int num1, int num2) {
	//	cout << num1 * num2;
	//}


	////함수 실습하기
	//
	//
	////두개의 정수를 매개변수로 받아 그합을 리턴하는 add함수를 만드세요.
	//	int add(int a, int b)
	//	{
	//		return a + b;
	//	}
	////두개의 정수를 매개변수로 받아 그 차를 리턴하는 minus함수를 만드세요.
	//	int minuss(int a, int b)
	//	{
	//		int result;
	//		if (a > b) {
	//			result = a - b;
	//		}
	//		else if (a < b) {
	//			result = b - a;
	//		}
	//		else { 
	//			result = 0;
	//		}
	//		return result;
	//	}
	////두개의 정수를 매개변수로 받아 그곱을 리턴하는 multiple 함수를 만드세요.
	//	int multiple(int num1, int num2)
	//	{
	//			return num1 * num2;//그곱을 리턴하는 함수
	//	}
	//
	//	
	////두개의 정수를 매개 변수로 받아 그 나눗셈을 리턴하는 divide함수를 만드세요.
	//	double divide(int a, int b) 
	//	{
	//	/*	float result = (float)a / (float)b;*/
	//		return (double)a / (double)b;
	//
	//	}
	//
	////하나의 정수를 매개변수로 받아서 그 수가 짝수이면 "짝수" 홀수이면 "홀수"라고 출력하는 함수 작성 및 사용
	//	string test(int a)
	//	{
	//		if (a % 2 == 0) {
	//			string str = "짝수";
	//			return str;
	//		}
	//		else {
	//			string str = "홀수";
	//			return str;
	//		}
	//		
	//	}
	//
	////번외 : 세개의 수를 매개변수로 받아서 그중 가장 큰 수를 반환하는 함수 작성.
	//	int big(int a, int b, int c)
	//	{
	//		if(a>b &&a>c){
	//			return a;
	//		}
	//		else if(b > a && b > c) {
	//			return b;
	//		}
	//		else {
	//			return c;
	//		}
	//	}
	//
	//	int main()
	//	{
	//		cout << "---- DAY3 과제하기 ----" << endl;
	//		cout << "실습1" << endl;
	//		cout << add(5, 4)<< endl;
	//		cout << "실습2" << endl;
	//		cout << minuss(5, 4)<<endl;
	//		cout << "실습3" << endl;
	//		cout << multiple(5, 4) << endl;
	//		cout << "실습4" << endl;
	//		cout << divide(5, 4)<<endl;
	//		cout << "실습5" << endl;
	//		cout << test(2)<<endl;
	//		cout << "[번외] 실습 매개변수 세 개중 가장 큰 수 반환 함수 작성" << endl;
	//		cout << "3, 4, 5 입력 후 가장 큰 수 : ";
	//		cout << big(3, 4, 5) << endl;
	//	}

	//[번외] 실습 : 입력한 숫자만큼 별 찍기
int num;
cout << "숫자를 입력해주세요. : ";
cin >> num;
cout << endl << "output : " << endl;
for (int i = 1; i <= num; i++) {
	for (int j = num; j >= i; j--)
	{
		cout << "*";

	}
	cout << endl;
}