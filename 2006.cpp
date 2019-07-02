#include<iostream>
using namespace std;
int main()
{
	int N,tmp, product;
	while (cin>>N)
	{
		product = 1;
		for (int i=0;i<N;i++)
		{
			cin >> tmp;
			if (tmp % 2 != 0)
				product *= tmp;
		}
		cout << product<<endl;
	}
}