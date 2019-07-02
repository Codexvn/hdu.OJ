#include <iostream>
using namespace std;
int main()
{
	int m, n, x, y;
	while (cin >> m >> n)
	{
		if (m>n)
		{
			x = m;
			m = n;
			n = x;
		}
		x = 0;
		y= 0;
		for (; m <= n; m++)
		{
			if (m % 2 == 0)
				x += m * m;
			else y += m * m * m;
		}
		cout << x << " " << y << endl;
	}
}