#include <iostream>
#include <string>
#include <fstream> //파일을 읽고, 쓸 수 있도록 관련 기능을 제공하는 헤더
#include <vector>
using namespace std;

int main()
{//예제를 이용한 실습 2 풀이
	//[//--------------회원 수를 직접 입력할 경우-----------------------}
	//[int x;															}
	//[cin >> x;														}
	//[for (int i = 0; i < x; i++) {									}
	//[//--------------회원 수가 몇명인지 모르고 계속 받을 때-----------}
	//[int x = 1;														}
	//[while (x != 0){ }												}
	//[무한히 입력하고, 다끝났을경우에 0을 입력하면 멈춤				}
	//[-----------------------------------------------------------------}
	
	////--------------회원 수가 정해져 있을 때---------------------------
	ofstream member("실습2.txt"); 
	//정보를 입력하기
	cout <<"3명의 회원에 대한 이름, 비밀번호를 순차적으로 입력하세요.\n";
	for (int i = 0; i < 3; i++) {
		cout << i + 1 << "번째 회원 : ";
		string pin;
		getline(cin, pin);//cin 내용을 info이라는 변수에 저장)

		if (member.is_open()) member << pin << endl;
		//member에다가 추가하여 정보를 입력한다.
	}
	member.close();

	ifstream member_r("실습2.txt");
	//정보를 불러오기
	string line;
	if (member_r.is_open()) {
		while (getline(member_r, line)) {
			cout << line << endl;
		}
	}
	member_r.close();
}


















