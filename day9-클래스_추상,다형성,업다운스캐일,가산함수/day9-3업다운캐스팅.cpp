#include <iostream>
using namespace std;

class Person
{
public:
	void test()
	{
		cout << "부모 클래스 test" << endl;
	}
};
class Student : public Person
{
public:
	void test_stu()
	{
		cout << "자식 클래스 test" << endl;
	}
};
//--------------포인터 변수 선언과 출력 복습하기--------------------------------------------------------
//포인터 : 메모리의 주소를 가진 변수
//포인터 변수는 * 을 이용하여 선언
//int* p; //포인터 변수 선언
//int n = 10;
//p = &n; // 포인터 변수 p에 n의 메모리 주소(&n)를 저장함
//결국 int* p = &n -> '10'이 출력된다.
//그렇지만 int* p = n -> 215326이 출력된다 (메모리 주소) 

//--------------동적 배열 선언과 할당 복습하기------------------------------------------------
//동적 배열을 만들기 위해선 '포인터 변수'와 'new' 키워드 사용
//int n2;
//cout << "숫자를 입력하세요: ";
//cin >> n2;
//int* arr = new int[n2] //n2에 동적 배열을 넣는다.
// 1. 동적 메모리를 가리키는 포인터 선언
// 2. new라는 키워드를 사용하여, 동적 배열 할당.
//delete[] arr; 동적 배열을 반납해야한다.

//------------업캐스팅-------------------------------------------------
//업캐스팅 : 부모클래스의 포인터Person*로 자식클래스의 인스턴스를 가리키는 것.
int main()
{
	//Person p = Student(); //일종의 업캐스팅이기는 하지만 c++에서는 다형성 실현 정도로만 취급한다.
	//p.test();
	
	Student s; //자식클래스 s 선언    (=int n;)
	Person* p2 = &s; // 업캐스팅(동적메모리x)      (=int* p = &n;)
	p2->test();           // => 부모 클래스
	//Student s의 주소를 담고 있는 Person p2
	//포인터는 주소를 담기 위해 존재할 뿐 모두가 동적메모리는 아니다.
	//p2는 주소를 담고 있을 뿐 동적메모리는 아니다.
	//delete p2; => 업타임 오류 발생

	Person* p3 = new Student(); //동적메모리 선언 업캐스팅
	//new가 포함되었기 때문에 동적메모리가 된다.
	p3->test();// => 부모 클래스
	//p3->test_stu(); //불가능
	delete p3; //동적메모리 해제도 해야한다.


//------------다운캐스팅----------------------------------------------------
//업캐스팅 된 것을 다시 원상태로 돌리는것 , 먼저 업캐스팅이 수반되어야 한다.

	Person* p4 = new Student(); //동적메모리 선언, 업캐스팅
	p4->test();  // => 부모 클래스
	//p4->test_stu();//불가능
	Student* stu = (Student*)p4;// 다운 캐스팅
	//p3는 'Person의 포인터'로 생성되어있는데, 그것을 원래대로 'Student의 포인터'로 복구시킨다.
	p4->test();  // => 부모 클래스
	//p4->test_stu();//불가능
	stu->test(); 		  // => 부모 클래스
	stu->test_stu();	  // => 자식 클래스
	delete p4; //동적메모리 해제도 해야한다.

//-------------업캐스팅의 예시-----------------------------------------------------------
//Shape shapes[2] = { Rect(5), Tria() };
//vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv
//Shape* shapes[2] = { new Rect(5), newTria() };
 
//Snack snackBasket[2] = { Candy("딸기맛",5000,"별사탕","해태"), Chocolate("네모",3000,"가나초콜릿","롯데제과") };
//vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv
//Snack* snackBasket[2] = { new Candy("딸기맛",5000,"별사탕","해태"), new Chocolate("네모",3000,"가나초콜릿","롯데제과") };
}