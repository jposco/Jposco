#include <iostream>
#include <string>
#include <fstream> //파일을 읽고, 쓸 수 있도록 관련 기능을 제공하는 헤더
#include <vector>
using namespace std;

int main()
{
	//	ifstream member("실습2.txt");
	//	string name, pin, name_in, pin_in;
	//
	//	cout << "이름을 입력하세요 : ";
	//	cin >> name;
	//	cout << "비밀번호를 입력하세요 : ";
	//	cin >> pin;
	//
	//	bool is_login = false;
	//
	//	if (member.is_open())
	//	{
	//		while (member >> name >> pin);
	//		{
	//			if(name_in == name&&pin_in==pin)
	//			{
	//				is_login = true;
	//				break;
	//			}
	//		}
	//	}
	//	if (is_login) 
	//	{
	//		string num, num_in;
	//		cout << "로그인성공" << endl;
	//		cout << "전화번호를 입력하세요 :";
	//		cin >> num;
	//
	//	ifstream member_tel("member_tel.txt");
	//	bool is_modify = false;
	//	string namenum;
	//
	//	if (member_tel.is_open())
	//	{
	//		string namenum;
	//		while (member_tel >> name >> num)
	//		{			
	//			if (name == name_in)//이름이 원래 있을 때 번호만 수정
	//			{
	//				namenum = name + num_in;
	//				is_modify = true;
	//			}
	//			else                //이름이 없을 때 추가하기
	//			{
	//				namenum = name + num + "\n";
	//			}		
	//			member_tel.close();
	//		}
	//	}
	//	
	//	ofstream member_tel_write;
	//
	//	if (is_modify)
	//	{
	//		member_tel_write.open("member_tel.txt");
	//		member_tel_write << namenum;
	//	}
	//	else
	//	{
	//		member_tel_write.open("member_tel.txt",ios::);
	string name, pin, name_in, pin_in;
	cout << "이름 : ";
	cin >> name;
	cout << "비번 : ";
	cin >> pin;

	ifstream member("실습2.txt");//실습2의 내용을 member에 옮겨담는다
	bool is_login = false;

	if (member.is_open())//member을 열고 있다면
	{
		while (member >> name_in >> pin_in)
		{
			if (name == name_in && pin == pin_in)
			{
				is_login = true;
				break;
			}
		}
	}
	member.close();

	
	if (is_login)
	{
		string num, num_in;
		cout << "로그인성공" << endl;
		cout << "전화번호 : ";
		cin >> num;

		ifstream tel("member_tel.txt");
		string tmp = "";
		string line = name_in + " "; //고길동 + " " 

		bool is_modify = false; // 기존 정보 수정 or 추가를 판단하는 변수

		if (tel.is_open())
		{
			while (tel >> name_in >> num_in)//없던것은 추가해서 적고 나머지를 새로작성한다.
			{
				string line = name_in + " ";
				if (name == name_in) //이름이 같다면 새로입력받은 전화번호를 입력
				{					
					is_modify = true;
					line += num;
				}
				else
				{
					line += num_in;//원래 있던 전화번호를 추가
				}
				tmp += line + "\n"; //고길동 + " " +01091118111
			}
			tel.close();
		}
		

		ofstream modify;
		if (is_modify)//수정을 했을 때
		{
			modify.open("member_tel.txt");
			modify << tmp;
		}
		else // 수정을 안했을 때
		{
			modify.open("member_tel.txt", ios::app);
			modify << name + " " + num;
		}
		modify.close();

	}
	else cout << "로그인 실패";
}










