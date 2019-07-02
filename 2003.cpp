#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	double get;
	cout << fixed << setprecision(2);
	unsigned long long* tmp;
	while (cin >> get)
	{
		tmp= (unsigned long long*)&get;
		*tmp = ((*tmp << 1) >> 1);
		cout << get << endl;
	}
	return 0;
}