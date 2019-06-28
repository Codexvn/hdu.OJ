#include<iostream>
using namespace std;
int main()
{
    int T;
    unsigned long long  A,B;
    cin>>T;
    for (int i=0;i<T&&cin>>A>>B;i++)
    {

        cout<<"Case "<<i+1<<":"<<endl;
        cout<<A<<" + "<<B<<" = "<<A+B<<endl<<endl;
    }
}
