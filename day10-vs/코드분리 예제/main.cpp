#include <iostream>
#include "Snack.h"
#include "Candy.h"
#include "Choco.h"
int main()
{
	string flavor, shape;
	vector<string> candy;
	vector<string> choco;
	cout << "***************************************" << endl;
	cout << "�� 1. ����" << endl;
	cout << "�� 2. ���ݸ�" << endl;
	cout << "�� 0. ����" << endl;
	cout << "***************************************" << endl;

	while (1)
	{
		cout << "�ٷ��̿� ���� �߰��� ������ ������.: ";
		int num_in;
		cin >> num_in;

		if (num_in == 1)
		{
			cout << "���� �Է��ϼ���. : ";
			cin >> flavor;
			Candy can = Candy(flavor, "����");
			candy.push_back(can.getName1());
		}
		else if (num_in == 2)
		{
			cout << "����� �Է��ϼ���. : ";
			cin >> shape;
			Choco cho = Choco(shape, "���ݸ�");
			choco.push_back(cho.getName2());
		}
		else if (num_in == 0)
		{
			cout << "���� �ٷ��̿� ��� ������ ������ : " << Snack::getCount() << "�� �Դϴ�." << endl;
			break;
		}
		else { cout << "1-2�� ���ڸ� �Է����ּ���" << endl; }
	}
	cout << "��� ��ǰ ���� " << endl;
	for (int i = 0; i < candy.size(); i++)
	{
		cout << candy.at(i) << " " << endl;
	}
	for (int i = 0; i < choco.size(); i++)
	{
		cout << choco.at(i) << " " << endl;
	}

}