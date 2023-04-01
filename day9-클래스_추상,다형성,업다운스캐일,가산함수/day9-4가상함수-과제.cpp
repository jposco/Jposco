#include <iostream>
using namespace std;

class Snack
{
protected:
	int price;
	string name;
	string manufacturer;
public:
	Snack(int price, string name, string manufacturer)
	{
		this->price = price;
		this->name = name;
		this->manufacturer = manufacturer;
	}
	string getName() 
	{
		return name;
	}
	void printName()
	{
		cout << "»óÇ° ÀÌ¸§ : " <<name<< endl;
	}
};
	
class Candy : public Snack
{
	string taste;
public:
	Candy(string taste, int price, string name, string manufacturer) : Snack(price, name, manufacturer)
	{
		this->taste = taste;
	}
	void printName()
	{
		cout << taste << "¸À " << getName() << endl;
	}
};
	
class Chocolate : public Snack
{
	string shape;
public:
	Chocolate(string shape, int price, string name, string manufacturer) : Snack(price, name, manufacturer)
	{
		this->shape = shape;
	}
	void printName()
	{
		cout << shape << " ¸ð¾ç " << getName() << endl;
	}
};
	
int main()
{
			 //Snack snackBasket[2] = { Candy("µþ±â¸À",5000,"º°»çÅÁ","ÇØÅÂ"), Chocolate("³×¸ð",3000,"°¡³ªÃÊÄÝ¸´","·Ôµ¥Á¦°ú") };
	Snack* snackBasket[] = { new Candy("µþ±â",5000,"º°»çÅÁ","ÇØÅÂ"), new Chocolate("³×¸ð",3000,"°¡³ªÃÊÄÝ¸´","·Ôµ¥Á¦°ú") };
	for (int i = 0; i < 2; i++)
	{
		cout << snackBasket[i]->getName() << endl;

	}
	Candy* can = (Candy*)snackBasket[0];
	can->printName();
	Chocolate* cho = (Chocolate*)snackBasket[1];
	cho->printName();
}

////--------°úÁ¦4 ´äÁö--------------------------------------------
//class Snack {
//	int price;
//	string name;
//	string maker;
//public:
//	Snack(string name) {
//		this->name = name;
//	}
//	void printName() {
//		cout <<"»óÇ° ÀÌ¸§µé : " << name << endl;
//	}
//
//	string getName() {
//		return name;
//	}
//};
//class Candy : public Snack {
//	string flavor;
//public:
//	Candy(string name) : Snack(name) {
//		this->flavor = "Æ÷µµ";
//	}
//
//	void printName() {
//		cout << flavor << "¸À " << getName() << endl;
//	}
//};
//
//class Choco : public Snack {
//	string shape;
//public:
//	Choco(string name) : Snack(name) {
//		this->shape = "³×¸ð";
//	}
//	void printName() {
//		cout << shape << "¸ð¾ç " << getName() << endl;
//	}
//};
//
//int main()
//{
//	Snack* snackBasket[4] = { new Candy("Ãò¸¨Ãò½º"), new Candy("¾Ë»çÅÁ"), new Choco("°¡³ªÃÊÄÝ¸´"), new Choco("Æä·¹·Î") };
//
//	for (int i = 0; i < 4; i++)
//	{
//		snackBasket[i]->printName();
//	}
//	Candy* candy = (Candy*)snackBasket[0];
//	candy->printName();
//	Choco* choco = (Choco*)snackBasket[2];
//	choco->printName();
//}
//
