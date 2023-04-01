#include <iostream>
using namespace std;

class Person
{
public:
	void test()
	{
		cout << "�θ� Ŭ���� test" << endl;
	}
};
class Student : public Person
{
public:
	void test()
	{
		cout << "�ڽ� Ŭ���� test" << endl;
	}
};

int main()
{
	Student s; //�ڽ�Ŭ���� s ����    
	Person* p2 = &s; // ��ĳ����      
	p2->test();           // => �θ� Ŭ����

	Person* p3 = new Student(); //�����޸� ���� ��ĳ����
	p3->test();// => �θ� Ŭ����
	delete p3; //�����޸� ������ �ؾ��Ѵ�.


	//------------�ٿ�ĳ����----------------------------------------------------
	//��ĳ���� �� ���� �ٽ� �����·� �����°� , ���� ��ĳ������ ���ݵǾ�� �Ѵ�.

	Person* p4 = new Student(); //�����޸� ����, ��ĳ����
	p4->test();  // => �θ� Ŭ����
	//p4->test_stu();//�Ұ���
	Student* stu = (Student*)p4;// �ٿ� ĳ����
	//p3�� 'Person�� ������'�� �����Ǿ��ִµ�, �װ��� ������� 'Student�� ������'�� ������Ų��.
	p4->test();  // => �θ� Ŭ����
	//p4->test_stu();//�Ұ���
	stu->test(); 		  // => �θ� Ŭ����
	stu->test_stu();	  // => �ڽ� Ŭ����
	delete p4; //�����޸� ������ �ؾ��Ѵ�.

}
