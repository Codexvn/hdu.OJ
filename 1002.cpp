#include<iostream>
#include<string>
using namespace std;
int main()
{
    string A,B,sum,*lengthMAX,*lengthMIN;
    char this1,this2;
    int T,Flag=0,tmp,j;
    cin>>T;
    for (int i=0;i<T;i++)
    {
        cin>>A>>B;
        if(A.length()>B.length())
        {
            lengthMAX=&A;
            lengthMIN=&B;
        }else {
            lengthMAX=&B;
            lengthMIN=&A;
        }
        for (j=0;j<lengthMIN->length();j++) 
        {
            this1=(*lengthMAX)[lengthMAX->length()-j-1];
            this2=(*lengthMIN)[lengthMIN->length()-j-1];
            if ((tmp=(this1-48)+(this2-48)+Flag)>9)
            {
                sum+=(char)(tmp%10+48);
                Flag=1;
            }
            else
            {
               sum+=(char)(tmp+48);
               Flag=0;
            }           
        }
        for (; j < lengthMAX->length(); j++)
        {
            this1=(*lengthMAX)[lengthMAX->length()-j-1];
             if ((tmp=(this1-48)+Flag)>9)
            {
                sum+=(char)(tmp%10+48);
                Flag=1;
            }else
            {
               sum+=(char)(tmp+48);
               Flag=0;
            }
        }
        cout<<"Case "<<i+1<<":"<<endl;
        cout<<A<<" + "<<B<<" = ";
        for (int k = sum.length()-1; k >= 0; k--)
        {
            cout<<sum[k];
        }
            if(i!=T-1)
            cout<<endl<<endl;
            else cout<<endl;
        sum.clear();
    }
}
