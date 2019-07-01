#include<iostream>
using namespace std;
void swap(char *max,char *min)
{
    char tmp=*max;
    *max=*min;
    *min=tmp;
}
int main(){
    char get[3];
    
    while (cin>>get)
    {
        if (get[0]>get[1])
            swap(&get[0],&get[1]);
        if (get[1]>get[2])
            swap(&get[1],&get[2]);
        if (get[0]>get[1])
            swap(&get[0],&get[1]);
        cout<<get[0]<<" "<<get[1]<<" "<<get[2]<<endl;
    
    }
}
