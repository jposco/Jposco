#include <iostream>
#include <ctime>//�ð��� �ҷ����� ��Ŭ���

using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(NULL))); //���ѽɱ�(�ð�����)

	for (int i = 0; i < 5; i++)
		cout << " ���� : " << rand() << endl;//��������

	return 0;
}
