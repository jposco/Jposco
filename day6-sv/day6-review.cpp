#include <iostream>
#include <string>
#include <fstream> //������ �а�, �� �� �ֵ��� ���� ����� �����ϴ� ���
#include <vector>
using namespace std;

int main()
{//������ �̿��� �ǽ� 2 Ǯ��
	//[//--------------ȸ�� ���� ���� �Է��� ���-----------------------}
	//[int x;															}
	//[cin >> x;														}
	//[for (int i = 0; i < x; i++) {									}
	//[//--------------ȸ�� ���� ������� �𸣰� ��� ���� ��-----------}
	//[int x = 1;														}
	//[while (x != 0){ }												}
	//[������ �Է��ϰ�, �ٳ�������쿡 0�� �Է��ϸ� ����				}
	//[-----------------------------------------------------------------}
	
	////--------------ȸ�� ���� ������ ���� ��---------------------------
	ofstream member("�ǽ�2.txt"); 
	//������ �Է��ϱ�
	cout <<"3���� ȸ���� ���� �̸�, ��й�ȣ�� ���������� �Է��ϼ���.\n";
	for (int i = 0; i < 3; i++) {
		cout << i + 1 << "��° ȸ�� : ";
		string pin;
		getline(cin, pin);//cin ������ info�̶�� ������ ����)

		if (member.is_open()) member << pin << endl;
		//member���ٰ� �߰��Ͽ� ������ �Է��Ѵ�.
	}
	member.close();

	ifstream member_r("�ǽ�2.txt");
	//������ �ҷ�����
	string line;
	if (member_r.is_open()) {
		while (getline(member_r, line)) {
			cout << line << endl;
		}
	}
	member_r.close();
}


















