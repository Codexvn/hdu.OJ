#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    double x1,x2,y1,y2;
    cout<<fixed<<setprecision(2);
    while (cin>>x1>>y1>>x2>>y2)
        cout<<sqrt(pow(x2-x1,2)+pow(y2-y1,2))<<endl;

}