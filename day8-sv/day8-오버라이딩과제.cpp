#include <iostream>
using namespace std;

class Student
{
protected :
	string name, school, stu_id;
public :
	Student(string name, string school, string stu_id)
	{
		this->name = name;
		this->school = school;
		this->stu_id = stu_id;
		cout << "�̸� : " << name << endl;
		cout << "�б� : " << school << endl;
		cout << "�й� : " << stu_id << endl;
	}
	void lunch()
	{
		cout << "������, ���ö��� ���� �����ö�����." << endl;
	}
};

class Kim : public Student
{
public : 
	Kim(string name, string school, string stu_id) : Student(name, school, stu_id)
	{
		cout << "�̸� : " << name << endl;
		cout << "�б� : " << school << endl;
		cout << "�й� : " << stu_id << endl;
	}
	void lunch()
	{
		cout << name  << " : �ƴϴ�. ���� �����ϱ⿣ �Ѽܵ��ö��� �ְ��. " << endl;
	}
};
class Beak : public Student
{
public:
	Beak(string name, string school, string stu_id) : Student(name, school, stu_id)
	{
		cout << "�̸� : " << name << endl;
		cout << "�б� : " << school << endl;
		cout << "�й� : " << stu_id << endl;
	}
	void lunch()
	{
		cout <<name<< " : �� �𸣳�. ���ö��� ���� �丶�䵵�ö��̴�. " << endl;
	}
};

int main()
{
	Student s = Student("����ö", "���ô��� ����", "15-1234");
	s.lunch();
	cout << endl;
	Kim k = Kim("�ҿ���", "�����ͽ���", "20-1234");
	k.lunch();
	cout << endl;
	Beak b = Beak("Nick", "���ڽ���", "23-1234");
	b.lunch();
}

//-------------����---------------------------------------------------
// �������̵� �ǽ�

class Student {
protected:
	string name;
	string school;
	int age;
	string stu_id;
public:
	void lunch() {
		cout << "������ �н�" << endl;
	}
};

class Kim : public Student {
public:
	Kim(string name, string school, int age, string stu_id) {
		this->name = name;
		this->school = school;
		this->age = age;
		this->stu_id = stu_id;
	}
	void lunch() {
		cout << "������ �谡�� ���" << endl;
	}
};

class Baek : public Student {
public:
	Baek(string name, string school, int age, string stu_id) {
		this->name = name;
		this->school = school;
		this->age = age;
		this->stu_id = stu_id;
	}
	void lunch() {
		cout << "������ ������ ����" << endl;
	}
};

int main() {
	Kim k = Kim("��", "�����", 20, "23111111111");
	Baek b = Baek("��", "������", 21, "22111111111");
	k.lunch();
	b.lunch();

	return 0;
}

