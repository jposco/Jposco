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
//	ofstream member("실습2.txt"); 
//	//정보를 입력하기
//	cout <<"3명의 회원에 대한 이름, 비밀번호를 순차적으로 입력하세요.\n";
//	for (int i = 0; i < 3; i++) {
//		cout << i + 1 << "번째 회원 : ";
//		string pin;
//		getline(cin, pin);//cin 내용을 info이라는 변수에 저장)
//
//		if (member.is_open()) member << pin << endl;
//		//member에다가 추가하여 정보를 입력한다.
//	}
//	member.close();
//
//	ifstream member_read("실습2.txt");
//	//정보를 불러오기
//	string line;
//	if (member_read.is_open()) {
//		while (getline(member_read, line)) {
//			cout << line << endl;
//		}
//	}
//	member_read.close();

//실습3 회원 명부를 응용한 로그인하기.
	ifstream member("실습2.txt");
	string name, pw, name_in, pw_in;

	cout << "이름을 입력하세요: ";
	cin >> name_in;

	cout << "비밀번호를 입력하세요: ";
	cin >> pw_in;

	bool is_login = false; //bool함수(is_login_를 false로 초기화 한다.

	if (member.is_open()) {
		while (member >> name >> pw) //member name pw
		{
			if (name_in == name && pw_in == pw) {
				is_login = true;
				break;
			}
		}

		if (is_login) {
			string tel_in, tel;
			cout << "로그인 성공" << endl;
			cout << "전화번호를 입력하세요. ";
			cin >> tel_in;

			ifstream member_tel_r("member_tel.txt");
			string member_tel_temp = "";

			bool is_modify = false; // 기존 정보 수정 or 추가를 판단하는 변수

			if (member_tel_r.is_open()) {
				while (member_tel_r >> name >> tel) {
					string line = name;
					if (name == name_in)
					{
						line += tel_in;
						is_modify = true;
					}
					else line += tel;
					member_tel_temp += line + "\n";
				}
				member_tel_r.close();
			}

			ofstream member_tel_w;

			if (is_modify)
			{
				member_tel_w.open("member_tel.txt");
				member_tel_w << member_tel_temp;
			}
			else
			{
				member_tel_w.open("member_tel.txt", ios::app);//초기화하지않고 수정할수있는거
				member_tel_w << name_in +tel_in + "\n";
			}
			member_tel_w.close();
		}
		else cout << "로그인 실패";
	}	
	else cout << "파일을 읽지 못하였습니다.\n";
	member.close();
}


















