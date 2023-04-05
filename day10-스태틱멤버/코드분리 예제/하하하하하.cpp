
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
	Candy(string flavor, string name) : Snack(name) {
		this->flavor = flavor;
	}
	string getName1() {
		string j = flavor + "맛" + getName();
		return j;
	}
};

class Choco : public Snack {
	string shape;
public:
	Choco(string shape, string name) : Snack(name) {
		this->shape = shape;
	}
	string getName2()
	{
		string i = shape + "모양" + getName();
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
	cout << "▶ 1. 사탕" << endl;
	cout << "▶ 2. 초콜릿" << endl;
	cout << "▶ 0. 종료" << endl;
	cout << "***************************************" << endl;

	while (1)
	{
		cout << "꾸러미에 넣을 추가할 간식을 고르세요.: ";
		int num_in;
		cin >> num_in;

		if (num_in == 1)
		{
			cout << "맛을 입력하세요. : ";
			cin >> flavor;
			Candy can = Candy(flavor, "사탕");
			candy.push_back(can.getName1());
		}
		else if (num_in == 2)
		{
			cout << "모양을 입력하세요. : ";
			cin >> shape;
			Choco cho = Choco(shape, "초콜릿");
			choco.push_back(cho.getName2());
		}
		else if (num_in == 0)
		{
			cout << "선물 꾸러미에 담긴 간식의 개수는 : " << Snack::getCount() << "개 입니다." << endl;
			break;
		}
		else { cout << "1-2의 숫자만 입력해주세요" << endl; }
	}
	cout << "담긴 상품 내역 " << endl;
	for (int i = 0; i < candy.size(); i++)
	{
		cout << candy.at(i) << " " << endl;
	}
	for (int i = 0; i < choco.size(); i++)
	{
		cout << choco.at(i) << " " << endl;
	}

}