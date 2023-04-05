#include <iostream>
#include <vector>
using namespace std;
//
//class Snack
//{
//	int num;
//	string flavor;
//	static int count;
//public:
//	Snack(int num)
//	{
//		this->num = num;
//		plusCount();
//		if (num == 1)
//		{
//			cout << "1. ������ �߰��ϼ̽��ϴ�." << endl;
//		}
//		else if (num == 2)
//		{
//			cout << "2. ���ݸ��� �߰��ϼ̽��ϴ�." << endl;
//		}
//		else if (num == 3)
//		{
//			cout << "3. ��ī���� �߰��ϼ̽��ϴ�." << endl;
//		}
//		else if (num == 4)
//		{
//			cout << "4. ������ �߰��ϼ̽��ϴ�." << endl;
//		}
//		else
//		{
//			cout << "1-4������ ���ڸ� �Է����ּ���." << endl;
//		}
//	}
//	void plusCount()
//	{
//		count++;
//	}
//	static int getCount()
//	{
//		return count;
//	}
//};
//int Snack::count = 0;
//int main()
//{
//	
//	string flavor_in;
//
//	cout << "***************************************" << endl;
//	cout << "�ٷ��̿� ���� �߰��� ������ ������." << endl;
//	cout << "�� 1. ����" << endl;
//	cout << "�� 2. ���ݸ�" << endl;
//	cout << "�� 3. ��ī��" << endl;
//	cout << "�� 4. ����" << endl;
//	cout << "***************************************" << endl;
//	while(1)
//	{
//		int num_in;
//		cin >> num_in;
//
//		if (num_in > 0)
//		{
//			Snack s = Snack(num_in);
//		}
//		else
//		{
//			break;
//		}
//	}
//	cout <<"���� �ٷ��̿� ��� ������ ������ : " Snack::getCount();<<�� �Դϴ�.
//	
//	
//}

class Snack {
	string name;
	static int count;

public:
	Snack(string name) {
		this->name = name;
		plusCount();
	}
	void plusCount()
	{
		count++;
	}
	static int getCount()
	{
		return count;
	}
	string getName() {
		return name;
	}
};
class Candy : public Snack {
	string flavor;
public:
	Candy(string flavor,string name) : Snack(name) {
		this->flavor = flavor;
	}
	string getName1() {
		string j = flavor + "��" + getName();
		return j;
	}
};

class Choco : public Snack {
	string shape;
public:
	Choco(string shape,string name) : Snack(name) {
		this->shape = shape;
	}
	string getName2()
	{
		string i = shape + "���" + getName();
		return i;
	}
};

int Snack::count = 0;

int main()
{
	string flavor, shape;
	vector<string> candy;
	vector<string> choco;
	cout << "***************************************" << endl;
	cout << "�� 1. ����" << endl;
	cout << "�� 2. ���ݸ�" << endl;
	cout << "�� 0. ����" << endl;
	cout << "***************************************" << endl;
	
	while (1)
	{
		cout << "�ٷ��̿� ���� �߰��� ������ ������.: ";
		int num_in;
		cin >> num_in;

		if (num_in == 1)
		{
			cout << "���� �Է��ϼ���. : ";
			cin >> flavor;
			Candy can =Candy(flavor, "����");
			candy.push_back(can.getName1());
		}
		else if (num_in == 2)
		{
			cout << "����� �Է��ϼ���. : ";
			cin >> shape;
			Choco cho = Choco(shape, "���ݸ�");
			choco.push_back(cho.getName2());
		}
		else if (num_in == 0)
		{
			cout << "���� �ٷ��̿� ��� ������ ������ : " << Snack::getCount() << "�� �Դϴ�." << endl;
			break;
		}
		else {cout<< "1-2�� ���ڸ� �Է����ּ���"<<endl; }
	}
	cout << "��� ��ǰ ���� " << endl;
	for (int i = 0; i < candy.size(); i++)
	{
		cout << candy.at(i) << " " << endl;
	}
	for (int i = 0; i < choco.size(); i++)
	{
		cout << choco.at(i) << " " << endl;
	}

}