#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

// Ÿ�Ӿ��� �����ձ� ����
int main()
{
	clock_t startTime = clock();

	string input, output = "airplane";
	int n, timer = 0, count = 0;


	while (1)
	{
		n = output.size();
		cout << output << endl;

		cout << "���� �ܾ �Է��ϼ���. : ";
		cin >> input;

		clock_t endTime = clock();
		timer = (endTime - startTime) / CLOCKS_PER_SEC;

		if (timer > 15)
		{
			cout << endl << "���� ���� \n" << "�� �Է��� �ܾ� ���� : " << count;
			break;
		}
		else if (input[0] == output[n - 1])
		{
			output += " -> " + input;
			count++;
			//cout << endl;
		}
		else
		{
			cout << "�߸��� �Է��Դϴ�. \n";
		}
		cout << "����� �ð�: " << timer << endl << endl;
	}

	return 0;
}