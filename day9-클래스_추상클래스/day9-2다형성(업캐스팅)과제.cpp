
#include <iostream>
using namespace std;
//class Snack
//{
//protected :
//	int price;
//	string name;
//	string manufacturer;
//public:
//	Snack(int price, string name, string manufacturer)
//	{
//		this->price = price;
//		this->name = name;
//		this->manufacturer = manufacturer;
//
//	}
//	string getName() {
//		return name;
//	}
//	void test()
//	{
//		cout << "부모 클래스 test" << endl;
//	}
//};
//
//class Candy : public Snack
//{
//	string taste;
//public:
//	Candy(string taste, int price, string name, string manufacturer) : Snack(price, name, manufacturer)
//	{
//		this->taste = taste;
//	}
//	void test_stu()
//	{
//		cout << "자식 클래스 test" << endl;
//	}
//};
//
//class Chocolate : public Snack
//{
//	string shape;
//public:
//	Chocolate(string shape, int price, string name, string manufacturer) : Snack(price, name, manufacturer)
//	{
//		this->shape = shape;
//	}
//	void test_stu()
//	{
//		cout << "자식 클래스 test" << endl;
//	}
//};
//
//int main()
//{//                                   *                                       *  
//	 //Snack snackBasket[2] = { Candy("딸기맛",5000,"별사탕","해태"), Chocolate("네모",3000,"가나초콜릿","롯데제과") };
//	Snack* snackBasket[] = { new Candy("딸기맛",5000,"별사탕","해태"), new Chocolate("네모",3000,"가나초콜릿","롯데제과") };
//	for (int i = 0; i < 2; i++)
//	{
//		cout << snackBasket[i]->getName() << endl;
//		snackBasket[i]->test();
//	}
//	Candy* can = (Candy*)snackBasket[0];
//	can->test_stu();
//	Chocolate* cho = (Chocolate*)snackBasket;
//	cho->test_stu();
//
//	delete can;
//	delete cho;
//}

//---------------답지----------------------------------------------------
#include <iostream>

using std::cout;
using std::cin;
using std::string;
using std::endl;

class Snack {
	int price;
	string name;
	string maker;
public:
	Snack(string name) {
		this->name = name;
	}
	void printName() {
		cout << "상품이름 : " << name << endl;
	}

	string getName() {
		return name;
	}
};
class Candy : public Snack {
	string flavor;
public:
	Candy(string name) : Snack(name) {
		this->flavor = "포도";
	}

	void printName() {
		cout << flavor << "맛 " << getName() << endl;
	}
};

class Choco : public Snack {
	string shape;
public:
	Choco(string name) : Snack(name) {

	}
};

int main() {
	Snack* snackBasket[4] = { new Candy("츄파"), new Candy("알사탕"), new Choco("가나"), new Choco("페레로") };
	for (int i = 0; i < 4; i++) {
		snackBasket[i]->printName();
	}

	Candy* candy = (Candy*)snackBasket[0];
	candy->printName();
}
