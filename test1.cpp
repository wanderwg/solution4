#include<iostream>
using namespace std;
int main2()
{
	int num;
	int max = 0;
	int tmp = 0;
	while (cin >> num)
	{
		while (num)
		{
			if ((num & 1) == 1)
			{
				tmp++;
			}
			else
			{
				tmp = 0;
			}
			if (tmp > max)
				max = tmp;
			num >>= 1;
		}
		cout << max << endl;
		tmp = 0;
		max = 0;
	}
	return 0;
}