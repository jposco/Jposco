#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	string input, output; //�Է°��� ������
	int timer = 0; //Ÿ�̸�
	int count = 0; //����Ƚ�� class�� ���ٸ� static����!
	string name_in; //�޸��� �г���
	cout << "***************************************" << endl;
	cout << " 30�ʰ� �����ձ� �����ϱ� " << endl;
	cout << "���޸��� �г����� �Է��Ͻÿ�. : ";
	cin >> name_in;
	cout << "**************************************" << endl;

	cout << "������ ���þ �Է��ϼ��� : ";
	cin >> output;
	cout << "������ ����!! ";

	clock_t startTime = clock(); //���� �ð�

	while (1)
	{

		int output_size = output.size();
		cout << output << endl;

		cout << "������ �ܾ �Է��ϼ��� : ";
		cin >> input;

		clock_t endTime = clock(); //���� �ð�
		int timer = (endTime - startTime) / CLOCKS_PER_SEC; //�ð��� ��

		if (timer > 30)
		{
			cout << endl << "��30�ʰ� �������ϴ� ���� ����!!" << endl;
			cout << "�� �Է��� �ܾ� ���� : " << count << endl;
			break;
		}
		else if (input[0] == output[output_size - 1])
		{
			output += " -> " + input;
			count++;
		}
		else
		{
			cout << "������ ���ĺ��� �ٽ� Ȯ�����ּ���. \n";
		}
		cout << "���� �ð� : " << 30 - timer << endl << endl; //���� �ð� ���
	}
	return 0;
}