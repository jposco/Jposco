#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

class CMarket
{
public:
	CMarket(string name)
	{
		this->name = name;
		cnt++;
	}
	static int get_cnt()
	{
		return cnt;
	}
	string get_name()
	{
		return name;
	}
private:
	static int cnt; //�� �� �����ߴ��� ī��Ʈ
	string name; //�Է��� ǰ�� �̸�
};

int CMarket::cnt = 0;

int main()
{
	cout << "*************************************************" << endl;
	cout << "'���忡 ���� ����' : �տ� ���� ���뿡 �̾�ϱ�" << endl;
	cout << "*************************************************" << endl;

	string things; //�Է¹��� ���ǵ�
	string thing; //�Ѱ��� �ɰ� ����
	vector<CMarket> v;

	while (1)
	{
		cout << "���忡 ���� ~ ";

		bool flag = true;
		getline(cin, things); //��������� things
		stringstream name_stream(things);//�ܾ� �ܾ�� �ɰ���
		name_stream >> thing; //�� �ܾ thing�� �ִ´�

		for (int i = 0; i < v.size(); i++) //�Ѱ��� �˻�
		{
			if (thing != v.at(i).get_name()) //�迭���� ���� �������
			{
				flag = false;
				break;
			}
			name_stream >> thing;
		}
		if (!flag) { break; }
		else { v.push_back(thing); }
	}
	cout << endl << "���忡�� ������ ���� ���� : " << CMarket::get_cnt() << "�� �Դϴ�.";

	return 0;
}