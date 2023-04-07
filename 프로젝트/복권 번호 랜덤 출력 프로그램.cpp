#include <iostream>
#include <ctime>
#include <vector>
using namespace std;

int main()
{
	int count = 0;
	srand(time(NULL));
	vector<int> v;

	while (count < 6)
	{
		int same = 0;
		int num = (rand() % 10) + 1;

		for (int i = 0; i < count; i++)
		{
			if (num == v[i])
			{
				same = 1;
				continue;
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