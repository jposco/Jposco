#include <iostream>
#include <vector>
using namespace std;

class Market
{
	static int cnt; //�� �� �����ߴ��� ī��Ʈ
	string name; //�Է��� ǰ�� �̸�
public:
	Market(string name_in)
	{
		this->name = name_in;
		cnt++; //�Է� ���� �� ī��Ʈ
	}
	static int get_cnt()//����ƽ ��� ����ϱ�
	{
		return cnt;
	}
	string get_name()
	{
		return name;
	}
};
int Market::cnt = 0;

int main()
{
	cout << "*******************************************" << endl;
	cout << "'���忡 ����' : �տ� ���� ���뿡 �̾�ϱ�" << endl;
	cout << "*******************************************" << endl;

	string thing;
	vector<Market> v;

	while (1)
	{
		cout << "���忡 ���� ~ ";
		int flag = 1; //������ ���Ḧ �˸��� ����
		cin >> thing;
		for (int i = 0; i < v.size(); i++)
		{
			if (thing != v.at(i).get_name())
			{
				flag = 0;
				break;
			}
			cin >> thing; //�Է��� ������ ���� �� ���ο� �Է¹ޱ�
		}
		if (!flag) { break; }
		else { v.push_back(Market(thing)); }	
	}
	cout << endl<< "���忡�� ������ ���� ���� : " << Market::get_cnt()<<"�� �Դϴ�.";
}