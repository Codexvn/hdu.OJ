#include<iostream>
using namespace std;
int main ()
{
    int A,j=0;
    while(cin>>A)
       { for (int i=1;i<=A;i++)
        {
            j+=i;
        }
        cout <<j<<endl<<endl;
        j=0;
    }
}
