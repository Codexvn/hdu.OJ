#include<iostream>
#include<iomanip>
#define PI 3.1415927
using namespace std;
int main()
{
	cout << fixed << setprecision(3);
	double r;
	while (cin >> r)
		cout << r * r * r * PI*4/ 3 << endl;
}