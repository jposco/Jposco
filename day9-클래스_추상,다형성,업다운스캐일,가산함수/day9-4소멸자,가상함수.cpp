#include <iostream>
using namespace std;

//Ŭ������ �ʵ�, �޼ҵ�, ������, �Ҹ��ڷ� ������.
//������ : ��ü�� ������ �� �ڵ����� ����Ǵ� �޼ҵ�
//�Ҹ��� : ��ü�� �Ҹ�� �� �ڵ����� ����Ǵ� �޼ҵ�

////------------�Ҹ���-----------------------------------
//class Person {
//public:
//	Person() {
//		cout << "������ �Դϴ�" << endl;
//	}
//
//	~Person() {
//		cout << "�Ҹ��� �Դϴ�" << endl;
//	}
//};
//
//int main() {
//	Person p; // �������Դϴ�.
//	// ���� �޸�
//	// ���ÿ����� �����. ������ ��������� �� �ʿ� X
//	// �ڵ����� �����Ǵµ�, main�Լ��� ���� ��
//	Person* p2 = new Person(); // �������Դϴ�.
//	// ���� �޸�
//	// �������� �����. ������ ��������� �� �ʿ� O
//	// ���� ? �ʿ���� �� delete
//	delete p2; // �Ҹ����Դϴ�.
//
//	cout << "�����Լ� �����Դϴ�" << endl;
//
//	// �Ҹ����Դϴ�. ( p�� ���� �Ҹ��� )
//	return 0;
//
//	//������ �Դϴ�
//	//������ �Դϴ�
//	//�Ҹ��� �Դϴ�
//	//�����Լ� �����Դϴ�
//	//�Ҹ��� �Դϴ�
//}


//-----------��Ӱ��迡���� �Ҹ���-----------------------
//
//class Person {
//public:
//	Person() {
//		cout << "Person ������ �Դϴ�" << endl;
//	}
//
//	~Person() {
//		cout << "Person �Ҹ��� �Դϴ�" << endl;
//	}
//};
//
//class Student : public Person {
//public:
//	Student() : Person() {
//
//		cout << "Student ������ �Դϴ�" << endl;
//	}
//	~Student() {
//		cout << "Student �Ҹ��� �Դϴ�" << endl;
//	}
//};
//
//int main() {
//	Student s = Student();
//	//Person ������ �Դϴ�
//	//Student ������ �Դϴ�
//
//	Student* s2 = new Student();
//	//Person ������ �Դϴ�
//	//Student ������ �Դϴ�
//
//	delete s2;
//	//Student �Ҹ��� �Դϴ�
//	//Person �Ҹ��� �Դϴ�
//	cout << "�ȳ�?" << endl;
//
//	//Student �Ҹ��� �Դϴ�
//	//Person �Ҹ��� �Դϴ�
//
//	return 0;
//}

//------------------�����Լ�------------------------------
//
//
//class Person {
//public:
//	Person() {
//	}
//	//�����Լ� : �θ�Ŭ�������� ���ǵ� ����.
//	//�ڽ�Ŭ������ ������(�������̵�) �� ���̶�� ����ϴ� �Լ�
//	//���� �����Լ� : ������ �ȵǾ� �ִ� �Լ� (= 0)
//	//virtual void sleep() = 0; -> ���� �����Լ�
//	virtual void sleep() //���� �Լ� : ���� ���ε��� �ϱ� ����
//		//�������ε�: ��Ÿ�Ӷ�
//	{
//		cout << "���ڱ�" << endl;
//	}
//
//	~Person() {		
//	}
//};
//
//class Student : public Person {
//public:
//	Student() : Person() {
//	}
//	void sleep() //�����Լ��� ������(�������̵�) �� ��.
//	{
//		cout << "�л��� 10�ÿ� ���ڱ�" << endl;
//	}
//	~Student() {
//	}
//};
//
//int main() {
//	Student s = Student();
//	s.sleep(); //�������ε�
//
//		//�л��� 10�ÿ� ���ڱ�
//	/*Person p = Student();
//	p.sleep();
//	//���ڱ�*/
//	Person* s2 = new Student(); //��ĳ����
//	//Person���� ���� -> ��? ������̳�? -> �ڽ�Ŭ�������� �������ϰ� �ֳ� ? Ȯ���Ѵ�.
//	//-> �� ������ �ϰ��ֳ�. -> �׷� �ڽ�Ŭ������ �д´�.
//	s2->sleep(); 
//		//�л��� 10�ÿ� ���ڱ�
//	
//	//-> �� �����ǰ� ����. -> �׷� �θ�Ŭ������ �д´�.
//		//�ᰡ��
//		
//-------------�����Լ��� �Ҹ���--------------------------------------------
class Person {
public:
	Person() {
		cout << "Person ������ �Դϴ�" << endl;
	}
	virtual void sleep() { //���� �Լ� : ���� ���ε��� �ϱ� ����
		cout << "���ڱ�" << endl;
	}

	virtual ~Person() {
		cout << "Person �Ҹ��� �Դϴ�" << endl;
	}
};

class Student : public Person {
public:
	Student() : Person() {
		cout << "Student ������ �Դϴ�" << endl;
	}
	void sleep() { //���� �Լ��� ������(�������̵�)�� ��
		cout << "�л��� ���ڱ�" << endl;
	}
	~Student() {
		cout << "Student �Ҹ��� �Դϴ�" << endl;
	}
};

int main() {
	Student s = Student();
	//Person ������ �Դϴ�
	//Student ������ �Դϴ�

	s.sleep(); // ���� ���ε� 
	// 10�ÿ� ���ڱ�

	Person* s2 = new Student(); //��ĳ����
	//Person ������ �Դϴ�
	//Student ������ �Դϴ�

	s2->sleep(); //���� ���ε�
	// 10�ÿ� ���ڱ�

	delete s2;
	//Student �Ҹ��� �Դϴ�
	//Person �Ҹ��� �Դϴ�

	cout << "�ȳ��ϼ���" << endl;
	//�ȳ��ϼ���
	
	//Student �Ҹ��� �Դϴ�
	//Person �Ҹ��� �Դϴ�
	return 0;
}
/*Person ������ �Դϴ�
Student ������ �Դϴ�
�л��� ���ڱ�
Person ������ �Դϴ�
Student ������ �Դϴ�
�л��� ���ڱ�
Student �Ҹ��� �Դϴ�
Person �Ҹ��� �Դϴ�
�ȳ��ϼ���
Student �Ҹ��� �Դϴ�
Person �Ҹ��� �Դϴ�*/



