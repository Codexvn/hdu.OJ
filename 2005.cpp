#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int year, month, day;
	while (~scanf_s("%d/%d/%d", &year, &month, &day))
	{
		switch (month - 1)
		{
		case 11:day += 30;
		case 10:day += 31;
		case 9:day += 30;
		case 8:day += 31;
		case 7:day += 31;
		case 6:day += 30;
		case 5:day += 31;
		case 4:day += 30;
		case 3:day += 31;
		case 2: (year % 4 == 0 && year % 100 != 0) || year % 400 == 0 ? day += 29 : day += 28;
		case 1:day += 31; 
		case 0:cout << day << endl;
		}
	}
}