//#include <iostream>
//using namespace std;
//
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person ������" << endl;
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
//		cout << "Student ������" << endl;
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
//	//p.test_stu(); ����
//
//	Student s1;
//	Person* p1 = &s1; //�����ͺ��� ���� �޸� ����
//	//p1.test_stu(); // -> ����
//	p1->test_per();
//
//	Person* p2 = new Student(); //�����ͺ��� ���� �޸� ����
//	//p2.test_stu(); // -> ����
//	p2->test_per();
//}