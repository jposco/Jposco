#include <iostream>
#include <string>
using namespace std;

int main()
{
	//과제1(1) city라는 배열 변수를 만들고 5개의 나라 이름을 값으로 지정.
		//string city[] = { "korea", "china", "japan", "UK", "USA" };
	//과제1(2) for문 혹은 for - each문을 활용하여 city 안의 모든 원소 출력.
		//cout << "----- < 과제1 > ----- " << endl;
		////for (int i = 0; i < sizeof(city) / sizeof(city[0]); i++) {
		//for(auto &K : city){
		//	cout << K << " ";
		//}


	//과제2(1)city2라는 배열변수 선언, 5개의 나라이름은 사용자가 콘솔에 입력한값
		//cout << "----------- < 과제2 > ----------- " << endl;
		//cout << "다섯가지 나라이름을 입력해주세요." << endl;
		//string city2[] = { "korea", "china", "japan", "UK", "USA" };
	//과제2(2)for문 혹은 for-each문으로 원소출력
		//for (int i = 0 ; i < 5;i++)
		//{
		//	cin >> city2[i];
		//}
		//cout << endl;
		//for(auto &K : city2)
		//{
		//	cout << K << " ";
		//}


	////////////////////////////////////////////////////////////////////////////
	//과제3(1) grade 라는 배열변수를 선언하고, 학생 5인의 성적입력받기
		//cout << "----------- < 과제3 > ----------- " << endl;
		//cout << "다섯명의 학생 성적을 입력해주세요." << endl;
		//int grade[5];
		//for (int i = 0; i < 5; i++)
		//{
		//	cout << i << "번 학생의 성적을 입력하세요. : ";
		//	cin >> grade[i];
		//	cout << endl;
		//}
		//int sum=0 ;
	//과제3(2) for문 혹은 for-each문을 활용하여 학생 5인의 성적 평균 산출
		//for (auto  &K : grade)
		//{	
		//	sum += K;
		//}
		//double result = (double)sum / 5;
		//cout << result;

	//과제4학생 3명의 국어 성적과 수학 성적을 입력 받아서 배열에 저장 후
		//학생들의 국어성적 평균, 수학성적 평균을 산출하는 프로그램 작성
		/*cout << "----------- < 과제4 > ----------- " << endl;
		cout << "세명의 학생의 국어, 수학 성적을 입력해주세요." << endl;
		int KR[3];
		int MT[3];
		for (int i = 0; i < sizeof(KR) / sizeof(KR[0]); i++)
		{
			cout <<i+1<< "번 학생의 국어성적 : ";
			cin >> KR[i];
			cout <<i+1 << "번 학생의 수학성적 : ";
			cin >> MT[i];
			cout << endl;
		}
		int sum_kr = 0;
		int sum_mt = 0;
		for (auto &K : KR)
		{
			sum_kr += K;
		}
		for (auto &M : MT)
		{
			sum_mt += M;
		}
		double result_kr = (double)sum_kr / 3;
		double result_mt = (double)sum_mt / 3;
		cout << "국어 평균 점수 : " << result_kr << endl;
		cout << "수학 평균 점수 : " << result_mt << endl;*/


////---------------------------------------------------------------------------
////과제5 
//	int correct[7] = { 7,10, 22, 25, 34, 40, 27 };
//	int user[7];
//
//	cout << " -----------------------------------------------" << endl;
//	cout << "[  로또 1059회차 (2023.03.18) 당첨번호 확인하기 ]" << endl;
//	cout << "[  찍으신 복권 번호 7자리를 입력해주세요.       ]" << endl;
//	cout << " -----------------------------------------------" << endl;
//
//	for (int i = 0; i < sizeof(user) / sizeof(user[0]); i++)
//	{
//		cin >> user[i];
//	}
//
//	int count = 0;
//	for (int i = 0; i < sizeof(correct) / sizeof(correct[0]); i++)
//	{
//		for (int j = 0; j < sizeof(correct) / sizeof(correct[0]); j++)
//		{
//			if (correct[i] == user[j]) {
//				count++;
//			}
//		}
//		
//	}
//	if (count == 7)
//	{
//		cout << "축하드립니다. 7개 번호 일치!!!!" << endl;
//		cout << "1등에 당첨 되셨습니다!!!!!!!!!!" << endl;;
//	}
//	else if (count == 6)
//	{
//		cout << "축하드립니다. 6개 번호 일치!!!!" << endl;
//		cout << "2등에 당첨 되셨습니다.!!!!!!!!!!" << endl;;
//	}
//	else if (count == 5)
//	{
//		cout << "축하드립니다. 5개 번호 일치!!!!" << endl;
//		cout << "3등에 당첨 되셨습니다.!!!!!!!!!!" << endl;;
//	}
//	else if (count == 4)
//	{
//		cout << "축하드립니다. 4개 번호 일치!!!!" << endl;
//		cout << "4등에 당첨 되셨습니다.!!!!!!!!!!" << endl;;
//	}
//	else if (count == 3)
//	{
//		cout << "축하드립니다. 3개 번호 일치!!!!" << endl;
//		cout << "5등에 당첨 되셨습니다.!!!!!!!!!!" << endl;;
//	}
//	else
//	{
//		cout << "아쉽습니다.. 낙첨입니다." << endl;
//	}

//-----------------------------------번외 배열실습---------------------
int num, score,sum;
cout << "몇 명의 성적 평균을 원하십니까?" ;
cin >> num;

for (int i = 0; i < num; i++)
{
	cout << i << "번 학생의 성적을 입력하세요. : ";
	cin >> score;
	sum = 0;
	sum += score;
	cout << endl;
}
double result = (double)sum / num;
cout << "성적 평균 : " << result << endl;







}
