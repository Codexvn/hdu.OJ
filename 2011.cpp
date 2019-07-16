#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout << fixed << setprecision(2);
    int N, get;
    double sum;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        sum=0;
        cin >> get;
        for (int j = get; j >= 1; j--)
        {
            if (j%2)
                sum+=1.0/j;
            else
                sum-=1.0/j;
        }
        cout<<sum<<endl;
    }
}
