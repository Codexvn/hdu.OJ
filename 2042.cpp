#include <iostream>
using namespace std;
int C(int n, int r);
int main()
{
	int N, M;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		long sum = 0;
		cin >> M;
		M -= 1;
		if (0 != M)
		{
			for (int i = M / 2 ; i >= 0; i--)
				sum += C(M - i, i);
		}
		cout <<sum << endl;
	}
}
int C(int n, int r)
{
	unsigned long long count1 = 1, count2 = 1;
	for (int i = n - r + 1; i <= n; i++)
		count1 *= i;
	for (int j = 1; j <= r; j++)
		count2 *= j;
	return count1 / count2;
}