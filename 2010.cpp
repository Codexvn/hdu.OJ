#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int m, n, flag;
	while (cin >> m >> n)
	{
		flag = 0;
		for (int i = m; i <= n; i++)
		{
			if (i == pow(i / 100, 3) + pow(i % 100 / 10, 3) + pow(i % 10, 3))
			{
				if (0== flag)
					cout << i;
				else cout << ' ' << i;
				flag = 1;
			}
		}
		if (0 == flag)
			cout << "no" << endl;
		else cout << endl;
	}
}