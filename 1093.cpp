#include<iostream>
using namespace std;
int main()
{
    int T,N,tmp,sum=0;
    cin>>T;
    for (int i = 0; i < T; i++)
    {
       cin>>N;
       for (int j = 0; j < N; j++)
       {
           cin>>tmp;
           sum+=tmp;
       } 
       cout<<sum<<endl;
       sum=0;
    }  
}