#include <iostream>
 
using namespace std;
 
int main()
{
    long long n,a[10000],b[10000],dem = 0;
    cin>>n;
    for (long long i = 1;i<=n;i++)
        cin>>a[i]>>b[i];
    for (long long i = 1;i<=n;i++)
        for (long long j = 1;j<=n;j++)
        if (a[i] == b[j])
        dem ++;
        cout<<dem;
    
    return 0;
}