#include <iostream>
#include <string>
using namespace std;

int main()
{
	//����1(1) city��� �迭 ������ ����� 5���� ���� �̸��� ������ ����.
		//string city[] = { "korea", "china", "japan", "UK", "USA" };
	//����1(2) for�� Ȥ�� for - each���� Ȱ���Ͽ� city ���� ��� ���� ���.
		//cout << "----- < ����1 > ----- " << endl;
		////for (int i = 0; i < sizeof(city) / sizeof(city[0]); i++) {
		//for(auto &K : city){
		//	cout << K << " ";
		//}


	//����2(1)city2��� �迭���� ����, 5���� �����̸��� ����ڰ� �ֿܼ� �Է��Ѱ�
		//cout << "----------- < ����2 > ----------- " << endl;
		//cout << "�ټ����� �����̸��� �Է����ּ���." << endl;
		//string city2[] = { "korea", "china", "japan", "UK", "USA" };
	//����2(2)for�� Ȥ�� for-each������ �������
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
	//����3(1) grade ��� �迭������ �����ϰ�, �л� 5���� �����Է¹ޱ�
		//cout << "----------- < ����3 > ----------- " << endl;
		//cout << "�ټ����� �л� ������ �Է����ּ���." << endl;
		//int grade[5];
		//for (int i = 0; i < 5; i++)
		//{
		//	cout << i << "�� �л��� ������ �Է��ϼ���. : ";
		//	cin >> grade[i];
		//	cout << endl;
		//}
		//int sum=0 ;
	//����3(2) for�� Ȥ�� for-each���� Ȱ���Ͽ� �л� 5���� ���� ��� ����
		//for (auto  &K : grade)
		//{	
		//	sum += K;
		//}
		//double result = (double)sum / 5;
		//cout << result;

	//����4�л� 3���� ���� ������ ���� ������ �Է� �޾Ƽ� �迭�� ���� ��
		//�л����� ����� ���, ���м��� ����� �����ϴ� ���α׷� �ۼ�
		/*cout << "----------- < ����4 > ----------- " << endl;
		cout << "������ �л��� ����, ���� ������ �Է����ּ���." << endl;
		int KR[3];
		int MT[3];
		for (int i = 0; i < sizeof(KR) / sizeof(KR[0]); i++)
		{
			cout <<i+1<< "�� �л��� ����� : ";
			cin >> KR[i];
			cout <<i+1 << "�� �л��� ���м��� : ";
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
		cout << "���� ��� ���� : " << result_kr << endl;
		cout << "���� ��� ���� : " << result_mt << endl;*/


////---------------------------------------------------------------------------
////����5 
//	int correct[7] = { 7,10, 22, 25, 34, 40, 27 };
//	int user[7];
//
//	cout << " -----------------------------------------------" << endl;
//	cout << "[  �ζ� 1059ȸ�� (2023.03.18) ��÷��ȣ Ȯ���ϱ� ]" << endl;
//	cout << "[  ������ ���� ��ȣ 7�ڸ��� �Է����ּ���.       ]" << endl;
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
//		cout << "���ϵ帳�ϴ�. 7�� ��ȣ ��ġ!!!!" << endl;
//		cout << "1� ��÷ �Ǽ̽��ϴ�!!!!!!!!!!" << endl;;
//	}
//	else if (count == 6)
//	{
//		cout << "���ϵ帳�ϴ�. 6�� ��ȣ ��ġ!!!!" << endl;
//		cout << "2� ��÷ �Ǽ̽��ϴ�.!!!!!!!!!!" << endl;;
//	}
//	else if (count == 5)
//	{
//		cout << "���ϵ帳�ϴ�. 5�� ��ȣ ��ġ!!!!" << endl;
//		cout << "3� ��÷ �Ǽ̽��ϴ�.!!!!!!!!!!" << endl;;
//	}
//	else if (count == 4)
//	{
//		cout << "���ϵ帳�ϴ�. 4�� ��ȣ ��ġ!!!!" << endl;
//		cout << "4� ��÷ �Ǽ̽��ϴ�.!!!!!!!!!!" << endl;;
//	}
//	else if (count == 3)
//	{
//		cout << "���ϵ帳�ϴ�. 3�� ��ȣ ��ġ!!!!" << endl;
//		cout << "5� ��÷ �Ǽ̽��ϴ�.!!!!!!!!!!" << endl;;
//	}
//	else
//	{
//		cout << "�ƽ����ϴ�.. ��÷�Դϴ�." << endl;
//	}

//-----------------------------------���� �迭�ǽ�---------------------
int num, score,sum;
cout << "�� ���� ���� ����� ���Ͻʴϱ�?" ;
cin >> num;

for (int i = 0; i < num; i++)
{
	cout << i << "�� �л��� ������ �Է��ϼ���. : ";
	cin >> score;
	sum = 0;
	sum += score;
	cout << endl;
}
double result = (double)sum / num;
cout << "���� ��� : " << result << endl;







}
