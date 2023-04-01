#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{//벡터 초기화 필수.  <벡터의 선언 문법>
	vector<int> v1; // 초기화가 안되어있다. assign을 수반한다
	v1.assign(4,1); // 크기 5인 배열, 모든 값 2로 초기화.
	//{1, 1, 1, 1}


	vector<int> v2 = {2, 2, 2, 2}; // 처음부터 초기화.
	//{2, 2, 2, 2}


	vector<int> v3(4); // 크기가 4인 배열, 모든 값 0으로 초기화.
	//{0, 0, 0, 0}

	vector<int> v4(4, 4);
	//{4, 4, 4, 4}
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v4.at(i) << " ";
	}

	//v4.front(); //첫번째 벡터 접근. (가져올때, 수정할때)
	//v4.back();  //마지막 벡터 접근. (가져올때, 수정할때)
	//v4.empty(); //벡터가 비어있는지 알려주는 함수(0 or 1)
	//v4.push_back(6);  //벡터의 마지막에 원소를 넣는다.
	//v4.pop_back();    //벡터의 마지막 원소를 꺼낸다.
	//v4.begin();       //사용시 벡터의 시작주소를 반환함.

	//v4.insert(v.begin() + 1, 0); //(넣고 싶은 자리, 넣고 싶은 숫자)
	//v4.insert(v4.end(),v1.begin(),v1.end());
	//(값이 들어갈자리 , 복사할 위치 시작부분 , 복사할 위치 끝부분)
	// {4, 4, 4, 4, 1, 1, 1, 1}
	// 
	//v4.erase(v.begin(), v.begin() + 2); //삭제하고 싶은 범위를 삭제함.
	//v4.clear();      //벡터 제거.

}