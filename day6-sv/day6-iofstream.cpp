#include <iostream>
#include <string>
#include <fstream> //파일을 읽고, 쓸 수 있도록 관련 기능을 제공하는 헤더
using namespace std;


int main()
{
    //ifstream file; // 파일을 담을 변수 선언
    //file.open("hello.txt"); //파일 명에 해당하는 파일 열기
//----------------------------------------------------------------------------------------
    //string word1 , word2;
    //if (file.is_open()) {//파일 열기
    //    for(int i = 0; i<3; i++)
    //    cout << "성공" << endl; 
    //    file >> word1 >> word2;
    //    cout << word1 << word2;
    //} else cout << "fail" << endl;
    //단어 마다 변수를 입력해서 변수를 받는 것은 매우 불편하다.
//-----------------------------------------------------------------------------------------
 // getline을 사용하여 줄단위로 읽는 법
    //string line;
    //getline(cin, line);
    //cout << line;
//----------파일 줄단위로 전체 내용 다 불러오기--------------------------------------
    ifstream file; // 파일을 담을 변수 선언
    file.open("hello.txt"); //파일 명에 해당하는 파일 열기
    string line;
    if (file.is_open()) {
        while (getline(file, line))//getline(cin,ifstream), line이라는 변수에 저장)
        {
            cout << line << endl;
        }
    } else cout << "fail" << endl;

    file.close();
//-----------파일에 내용 입력하기---------------------------------------------
    ofstream file2("bye.txt");
    if (!file2.fail()) {
        file2 << line << endl;
    }
    else cout << "fail";

}



//---------------------------------------------------------------------------------
//정보를 입력하기
ofstream member("실습2.txt");
cout << "3명의 회원에 대한 이름, 비밀번호를 순차적으로 입력하세요.\n";
for (int i = 0; i < 3; i++) {
    cout << i + 1 << "번째 회원 : ";
    string pin;
    getline(cin, pin);//cin 내용을 info이라는 변수에 저장)

    if (member.is_open()) member << pin << endl;
    //member에다가 추가하여 정보를 입력한다.
}
member.close();

ifstream member_r("실습2.txt");
//---------------------------------------------------------------------------------
//정보를 불러오기
string line;
if (member_r.is_open()) {
    while (getline(member_r, line)) {
        cout << line << endl;
    }
}
member_r.close();
}