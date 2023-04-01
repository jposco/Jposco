//#include <iostream>
//using namespace std;
//
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person 생성자" << endl;
//	}
//	void test()
//	{
//		cout << "Person test" << endl;
//	}
//	void test_per()
//	{
//		cout << "Person test_Per" << endl;
//	}
//};
//class Student : public Person
//{
//public:
//	Student():Person()
//	{
//		cout << "Student 생성자" << endl;
//	}
//	void test()
//	{
//		cout << "Student test" << endl;
//	}
//	void test_stu()
//	{
//		cout << "Student test_stu" << endl;
//	}
//};
//
//int main()
//{
//	Student s = Student();
//	s.test();
//	s.test_per();
//	s.test_stu();
//
//	Person p = Person();
//	p.test();
//	p.test_per();
//	//p.test_stu(); 오류
//
//	Student s1;
//	Person* p1 = &s1; //포인터변수 정적 메모리 선언
//	//p1.test_stu(); // -> 오류
//	p1->test_per();
//
//	Person* p2 = new Student(); //포인터변수 동적 메모리 선언
//	//p2.test_stu(); // -> 오류
//	p2->test_per();
//}