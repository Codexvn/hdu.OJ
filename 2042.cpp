#include<iostream>
using namespace std;
int main()
{
	int N,M ;
	cin >> N;
	for (int i = 0,sheep=3; i < N; i++, sheep = 3)
	{
		cin >>M;
		int j;
		for (j = 0; j < M; j++)
			sheep = (sheep - 1) * 2;
		cout << sheep << endl;
	}
}