#include <iostream>
using namespace std;

int main()
{/*
    int num;
    cout << "원하시는 숫자를 입력하세요.\n";
    cin >> num ;
    cout << "당신이 말씀하신 숫자는" << num << "입니다.\n";


    //기본자료형 - int, float
    int a = 1;
    int b = 2;
    cout << a << " + " << b << " = " << a + b << endl;
    float c = 0.1;
    float d = 0.4;
    cout << c << " - " << d << " = " << c + d << endl;

    //기본자료형 - bool???????
    bool c1 = true;
    cout << c1 << endl;
    bool c2 = false;
    cout << c2 << endl;




    //기본자료형 - char
    char f = 'f';
    cout << f << endl;
    char g = 'g';
    cout << g << endl;

    //string 변수명;
    //string 변수명 = "내용";
    string str1 = "name";
    cout << str1 << endl;

    int a;
    string b;
    string c;

    cin >> a;
    cin >> b;
    cin >> c;

    cout << a << b << endl;
    cout << b + c;

   //실습1번
    string stname;
    cout << "신규회원 가입을 위해 고객님의 성함을 입력해주세요." << endl;
    cin >> stname;
    cout << "고객님의 성함은 " << stname << " 이시군요. " << endl;
    cout << endl;

    int age;
    cout << "다음으로 나이를 입력해주세요." << endl;
    cin >> age;
    cout << "당신의 나이는 " << age << " 이군요. " << endl;
    cout << endl;

    cout << "신규회원이 되신 것을 축하드립니다." << stname << "님(" << age << "세)";
    //생년월일 입력을 통해 만 나이로 적용하는 방법이 궁금해졌다.
    */

    //연산자
    /*
//실습 2번
    int age;
    cout << "나이를 입력하세요. " << endl;
    cin >> age;
    if (0< age && age < 8) {
        cout << "미취학아동" << endl;
    }
    else if (7 < age && age < 14) {
        cout << "초등학생" << endl;
    }
    else if (13 < age && age < 17) {
        cout << "중학생" << endl;
    }
    else if (16 < age && age < 20) {
        cout << "고등학생" << endl;
    }
    else if (19 < age && age < 200) {
        cout << "성인" << endl;
    }
    else {
        cout << "나이가 너무 많습니다," << endl;
    }
    }
    */


    //if문
    /*
    int a = 5;
    if (a < 10) {
        cout << "a가 10보다 큽니다." << endl;
    }
    else if (a == 5) {
        cout << "a는 5입니다," << endl;
    }
    else {
        cout << "a는 10보다 크지 않고 5가 아닙니다." << endl;
    }
    */

    /*
        //실습3번
    string name;
    cout << "과제3번" << endl;
        cout << "이름을 입력하세요." << endl;
        cin >> name;

        if (name == "홍길동") {
            cout << "남자입니다." << endl;
         }
        else if(name == "성춘향") {
            cout << "여자입니다." << endl;
        }
        else {
            cout << "모르겠어요." << endl;
        }
    }
    //string 연산자는 무조건 큰따옴표로 막아준다.
    // if문 안에서의 =는 대입의 개념이 아닌 비교 개념으로써 ==로 써야한다.


    //실습4번

int num;
cout << "-----< 실습4 >-----" << endl;
cout << "숫자를 입력하세요." << endl;
cin >> num;
int a = num % 5;
a == 0 ? cout << num << "는 5의 배수입니다." : cout << num << "는 5의 배수가 아니네욤.." << endl;

cout << " -----< 과제5 >-----" << endl;
string stname;
cout << "신규회원 가입을 위해 고객님의 성함을 입력해주세요." << endl;
cin >> stname;
cout << "고객님의 성함은 " << stname << " 이시군요. " << endl;
cout << endl;

int age;
cout << "다음으로 나이를 입력해주세요." << endl;
cin >> age;
cout << "당신의 나이는 " << age << " 이군요. " << endl;
cout << endl;

if (age < 20) {
    cout << "성인의 경우에만 가입이 가능합니다." << endl;
}
else {
    cout << stname <<  "신규 회원가입을 축하드립니다." << endl;
}

if {
    if {
        if{

}




}
*/
    cout << " 구구단게임을 해보자 " << endl;
    cout << " 문제를 내주세요 (숫자입력해주세요)" << endl;
    int a;
    int b;
    cin >> a;
    cout << a << "와 곱해질 숫자 하나 더 입력 해주세요" << endl;
    cin >> b;
    cout << a <<" x "<< b << "결과 값은" << a * b << "입니다.";
}



























// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
