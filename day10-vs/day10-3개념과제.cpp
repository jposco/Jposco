//#include <iostream>
//#include <vector>
//using namespace std;
//
//class Person
//{
//	string name;
//	static int count;
//public:
//	Person(string name)
//	{
//		this->name = name;
//	}
//	void plusName()
//	{
//		count++;
//	}
//	static int getCount()
//	{
//		return count;
//	}
//
//};
//int Person::count = 0;
//
//int main()
//{
//	vector<string> v;
//	string name;
//	string sum;
//	cout << "'���忡 ����' ������ �غ���." << endl;
//	cout << "���忡 ����~ ���忡 ���� ~ : ";
//
//	while (1)
//	{
//		//�̸� ���Է�
//	
//		cin >> name;
//		Person p = Person(name);
//		v.push_back(name);
//
//
//		for (int i = 0; i < v.size(); i++)
//		{
//			sum += v.at(i);
//		}
//		cout << sum;
//		cout << "���忡 ����~ ";
//		cin >> name_re;
//		if (name_re == sum)
//		{
//			cin >> name;
//			Person p = Person(name);
//			v.push_back(name);
//		}
//

#include <iostream>
#include <vector>
using namespace std;

class Person
{
	string name;
	vector<string> Nm;
	int count;
	string sum;
public:
	Person()
	{
		count++;
	}
	//void plusName(string name)
	//{
	//	this->name = name;
	//	Nm.push_back(name);
	//}
	int get_count() {
		return count;
	}
	
	bool get_name(string name) {
		for (int i = 0; i < Nm.size(); i++){
			for (int j = 0; j < i; j++) {
				Nm.at(i) == Nm.at(j);
			}
		}
		return true;
	}

};

int main()
{
	string name;
	vector<string> Nm;

	while (1) {

		cout << "���忡 ���� ~ ";
		cin >> name;
		Person p;
		
		if (p.get_name(name)) {
				Nm.push_back(name);
		}
		else cout << "��������! �� " << p.get_count()-1 << "�� �����ϼ̽��ϴ�.";

		//cout << "���忡 ���� ~ ";
		//cin >> name;
		//Person p1 = Person(name);
		//p1.plusName();
		///*if (name_good != p.getname())
		//{
		
		//	break;
		//}*/
	}
	

}