#include<iostream>
using namespace std;
int main()
{
	int N, a, b, c;
	double tmp;
	while (cin >> N)
	{
		
		a = b = c = 0;
		if (N<=0)
		continue;
		for (int i = 0;i < N; i++)
		{
			cin >> tmp;
			tmp > 0 ? a++ : (tmp == 0 ? b++ : c++);
		}
			
		cout << c<< " " << b << " " << a << endl;
	}
}