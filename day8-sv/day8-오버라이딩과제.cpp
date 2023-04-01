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
		cout << "이름 : " << name << endl;
		cout << "학교 : " << school << endl;
		cout << "학번 : " << stu_id << endl;
	}
	void lunch()
	{
		cout << "에헤이, 도시락은 역시 본도시락이지." << endl;
	}
};

class Kim : public Student
{
public : 
	Kim(string name, string school, string stu_id) : Student(name, school, stu_id)
	{
		cout << "이름 : " << name << endl;
		cout << "학교 : " << school << endl;
		cout << "학번 : " << stu_id << endl;
	}
	void lunch()
	{
		cout << name  << " : 아니다. 내가 생각하기엔 한솥도시락이 최고다. " << endl;
	}
};
class Beak : public Student
{
public:
	Beak(string name, string school, string stu_id) : Student(name, school, stu_id)
	{
		cout << "이름 : " << name << endl;
		cout << "학교 : " << school << endl;
		cout << "학번 : " << stu_id << endl;
	}
	void lunch()
	{
		cout <<name<< " : 뭘 모르네. 도시락은 역시 토마토도시락이다. " << endl;
	}
};

int main()
{
	Student s = Student("정제철", "와플대학 졸업", "15-1234");
	s.lunch();
	cout << endl;
	Kim k = Kim("소연상", "에프터스쿨", "20-1234");
	k.lunch();
	cout << endl;
	Beak b = Beak("Nick", "피자스쿨", "23-1234");
	b.lunch();
}

//-------------답지---------------------------------------------------
// 오버라이딩 실습

class Student {
protected:
	string name;
	string school;
	int age;
	string stu_id;
public:
	void lunch() {
		cout << "점심은 학식" << endl;
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
		cout << "점심은 김가네 김밥" << endl;
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
		cout << "점심은 백종원 피자" << endl;
	}
};

int main() {
	Kim k = Kim("김", "서울대", 20, "23111111111");
	Baek b = Baek("백", "연세대", 21, "22111111111");
	k.lunch();
	b.lunch();

	return 0;
}

