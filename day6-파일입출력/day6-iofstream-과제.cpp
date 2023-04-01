#include <iostream>
#include <string>
#include <fstream> //파일을 읽고, 쓸 수 있도록 관련 기능을 제공하는 헤더
#include <vector>
using namespace std;

int main()
{
    //---------------------------------------------------------------------------
    ////실습 1 파일에 입력된 내용 불러서 다른 파일에 입력하기
            //ifstream file; // 파일을 담을 변수 선언
            //file.open("hello.txt"); //파일 명에 해당하는 파일 열기
            //string line; //line이라는 변수 선언
            //ofstream file2("output.txt"); //새로 입력한 파일명을 입력
            //if (file.is_open()) {
            //    while (getline(file, line))//getline(cin,ifstream, line이라는 변수에 저장)
            //    {
            //        file2 << line << endl;
            //    }
            //}
            //else cout << "fail" << endl;

    ////벡터를 사용한 실습1 예제
        //ifstream infile("hello.txt");
        //ofstream outfile("output.txt");
        //string line;
        //vector<string> v1;

        //if (infile.is_open() && outfile.is_open()) {
        //    while (getline(infile, line)) {
        //        v1.push_back(line);
        //    }

        //    for (int i = v1.size() - 1; i >= 0; i--) {
        //        outfile << v1[i] << endl;
        //    }
        //}
        //else cout << "파일 없음" << endl;

        ////----------------------------------------------------------------------------
        //실습 2 회원 명부 작성하기
            //ofstream file("실습2.txt"); //새로 입력한 파일명을 입력
            //string line;
            //string name[3], pin[3];

            //cout << "3명의 회원에 대한 이름 비밀번호를 순차적으로 입력하세요." << endl;
            //    for (int i = 0; i < 3; i++) {
            //        cin >> name[i] >> pin[i];
            //        file << name[i]<< pin[i] << endl;

            //    }

            //    cout << "-----------------회원 명부 파일 읽기------------------" << endl;
            //ifstream file2; // 파일을 담을 변수 선언
            //file2.open("실습2.txt"); //파일 명에 해당하는 파일 열기
            //
            //string line2;
            //if (file2.is_open()) {
            //    while (getline(file2, line2))//getline(cin,ifstream), line이라는 변수에 저장)
            //    {
            //        cout << line2 << endl;
            //    }
            //}
            //else cout << "fail" << endl;
 ////벡터를 이용한 실습 2 풀이
 // ofstream member("member.txt");
	
    cout << "3명의 회원에 대한 이름, 비밀번호를 순차적으로 입력하세요.\n";

    for (int i = 0; i < 3; i++) {
        cout << i + 1 << "번째 회원 : ";

        string info;
        getline(cin, info);

        if (member.is_open()) member << info << endl;
    }

    member.close();

    ifstream member_r("member.txt");
    string line;

    if (member_r.is_open()) {
        while (getline(member_r, line)) {
            cout << line << endl;
        }
    }

    member_r.close();
}
        ////-----------------------------------------------------------------------------------
        ////과제3 회원 명부를 응용한 로그인 기능

    string name, pin, num;
    cout << "이름을 입력하세요 : ";
    cin >> name;
    cout << endl << "비밀번호를 입력하세요 : ";
    cin >> pin;

    ifstream file("실습2.txt"); // //file이란 변수에 실습2의 내용을 넣다
    string line; //line = 홍길동호형호제 고길동둘리 아파트아파트
    vector<string> v;
    if (file.is_open()) {
        while (getline(file, line))
        {
            getline(file, line);//file=실습2의 내용을 line이라는 변수에 저장
            v.push_back(line);//file에 있는 한 문장씩을 line 배열에 저장
        }
        //< 실습2.txt >
        //[0] 홍길동호형호제
        //[1] 고길동둘리
        //[2] 아파트아파트

        string sum = name + pin;
        for (int i = 0; i < v.size(); i++) {
            if (sum == v[i])
            {//아디 비번 == 실습2.txt
                cout << "로그인 성공" << endl;
                cout << " 전화번호를 입력하세요. : ";
                cin >> num;
            }
            else
            {
                cout << "로그인 실패" << endl;
                break;
            }
            return 0;
        }
    }
    file.close();

    ifstream file_v("member_tel.txt");
    vector<string> v1;
    string sum_v = name + num;
    string line_v;
    if (file_v.is_open()) {
        while (getline(file_v, line_v)) {//getline(cin,ifstream), line이라는 변수에 저장)
            v1.push_back(line_v);
        }
        for (int i = 0; i < v1.size(); i++)
        {
            if (v1[i] == sum_v)
            {
                v1[i] = sum_v;
            }
            else {
                v1.push_back(sum_v);
            }
        }
       
    }
    file_v.close();

    ofstream in("member_tel.txt");
    for (int i = 0; i < v1.size(); i++) {
        in << v1.at(i) << endl;
    }
//----------------------------------------------------------------------------------
//과제4 로그인 성공 시 전화번호 저장하기



















    
}