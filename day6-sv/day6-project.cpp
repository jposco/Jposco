#include <iostream>
#include <string>
#include <fstream> //파일을 읽고, 쓸 수 있도록 관련 기능을 제공하는 헤더
#include <vector>
using namespace std;

int main()
{
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
            v.push_back(line);//file에 있는 한 문장씩을 line 배열에 저장
        }
        //< 실습2.txt >
        //[0] 홍길동호형호제
        //[1] 고길동둘리
        //[2] 아파트아파트
        for (int i = 0; i < v.size(); i++) {
        cout << v.at(i);
    }
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
}