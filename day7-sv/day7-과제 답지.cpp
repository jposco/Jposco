#include <iostream>
using namespace std;

class Character { //클래스  Character 선언
	string name; //name
	int level = 0, item_num = 0;

public: //접근 제어자
	Character(string name) { //생성자 (메소드)
		this->name = name; //입력받은 name을 클래스 name에 집어넣는다.
		cout << name << " 캐릭터가 생성 되었습니다.";
	}

	void setName(string name) {
		this->name = name;//수정입력 받은 name을 클래스 name에 집어 넣는다
		cout << "new name : " << this->name << endl;//출력도 클래스 name에서 받는다
	}

	void levelUp() {
		level++;
		cout << "level up!!\n";
		cout << "현재 레벨은 : " << level << endl;
	}

	void itemUp() {
		item_num++;
		cout << "아이템을 획득했습니다!!\n";
		cout << "현재 아이템 개수는 : " << item_num << endl;
	}

	void useItem()
	{
		if (item_num < 1) 
		{
			cout << "아이템을 사용할 수 없습니다.\n";
			return;
		}
		else
		{
			item_num--;
			cout << "아이템을 사용했습니다!!\n";
			cout << "현재 아이템 개수는 : " << item_num << endl;
		}
	}

	void printInfo() {
		cout << "이름 : " << name << endl;
		cout << "레벨 : " << level << endl;
		cout << "아이템 개수 : " << item_num << endl;
	}
};

int main() {
	string name, new_name;
	char action;

	cout << "이름을 입력해주세요: ";
	cin >> name;

	Character ch1(name);

	while (1) {
		cout << "어떤 동작을 실행하시겠습니까? (0: 종료) ";
		cin >> action;

		if (action == '0') break;

		switch (action) {
		case '1':
			cout << "새 이름을 입력해주세요 : ";
			cin >> new_name;
			ch1.setName(new_name);
			break;
		case '2':
			ch1.levelUp();
			break;
		case '3':
			ch1.itemUp();
			break;
		case '4':
			ch1.useItem();
			break;
		case '5':
			ch1.printInfo();
			break;
		default:
			cout << "0부터 5까지 입력해주세요.\n";
		}
	}
}