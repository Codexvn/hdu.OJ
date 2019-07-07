#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	cout << fixed << setprecision(2);
	int  N;
	double sum,tmp;
	while (cin>> tmp >>N)
	{
		sum = 0;
		for (int i = 0; i < N; i++)
		{
			sum += tmp;
			tmp = sqrt(tmp);
		}
		cout << sum << endl;
	}
}