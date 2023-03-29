#include <iostream>
#include <string>
#include <fstream> //파일을 읽고, 쓸 수 있도록 관련 기능을 제공하는 헤더
#include <vector>
using namespace std;

int main()
{
	ifstream member("실습2.txt");
	string name, pin, name_in, pin_in;

	cout << "이름을 입력하세요 : ";
	cin >> name;
	cout << "비밀번호를 입력하세요 : ";
	cin >> pin;

	bool is_login = false;

	if (member.is_open())
	{
		while (member >> name >> pin);
		{
			if(name_in == name&&pin_in==pin)
			{
				is_login = true;
				break;
			}
		}
	}
	if (is_login) 
	{
		string num, num_in;
		cout << "로그인성공" << endl;
		cout << "전화번호를 입력하세요 :";
		cin >> num;

	ifstream member_tel("member_tel.txt");
	bool is_modify = false;
	string namenum;

	if (member_tel.is_open())
	{
		string namenum;
		while (member_tel >> name >> num)
		{			
			if (name == name_in)//이름이 원래 있을 때 번호만 수정
			{
				namenum = name + num_in;
				is_modify = true;
			}
			else                //이름이 없을 때 추가하기
			{
				namenum = name + num + "\n";
			}		
			member_tel.close();
		}
	}
	
	ofstream member_tel_write;

	if (is_modify)
	{
		member_tel_write.open("member_tel.txt");
		member_tel_write << namenum;
	}
	else
	{
		member_tel_write.open("member_tel.txt");












}