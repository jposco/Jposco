#include <iostream>
#include <ctime>
#include <vector>
using namespace std;

int main()
//{
//	srand(static_cast<unsigned int>(time(NULL)));
//	int num;
//	vector<int> v;
//
//	for (int i = 0; i < 6; i++)
//	{
//		num = (rand() % 45) + 1;
//		// cout<<num<<" ";
//		v.push_back(num);
//	}
//
//	for (auto elem : v) {
//		cout << elem << " ";
//	}
//	return 0;
//}


//�ǽ� (1)
//�ζ� ��ȣ ��÷ ���α׷�
//1~45 ������ �� �߿���
//�������� 6���� ��ȣ�� �����ϴ� ���α׷�
//�ߺ� �Ұ���
//������ �Ϸ� �Ǹ� 6���� ��÷��ȣ ����ϱ�

int main()
{
	int count = 0;
	srand(time(NULL));
	vector<int> v;

	while (count < 6)
	{
		int same = 0;
		int num = (rand() % 45) + 1;

		for (int i = 0; i < count; i++)
		{
			if (num == v[i])
			{
				same = 1;
				break;
			}
		}
		if (same == 0)
		{
			v.push_back(num);
			count++;
		}
	}
	for (int elem : v)
	{
		cout << elem << " ";
	}
	return 0;
}