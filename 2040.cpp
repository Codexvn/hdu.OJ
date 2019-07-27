#include <iostream>
#include <cmath>
using namespace std;
bool temp(int& A, int& B)
{
	if (A<=1||B<=1)
		return false;
	int sum = 1, n = sqrt(A);
	for (int i = 2; i <= n; i++)
	{
		if (0 == A % i)
		{
			sum += i;
			sum += A / i;
		}
	}
	if (sum == B)
		return true;
	else return false;
}
int main()
{
	int M,A,B;
	cin >> M;
	for (int i=0;i<M;i++)
	{
		cin >> A >> B;
		if (temp(A, B) && temp(B, A))
			cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
