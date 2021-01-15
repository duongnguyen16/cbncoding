#include<bits/stdc++.h>
using namespace std;
int Fib(int n)
{
    if (n == 1 || n == 2)
        return 1;
    return Fib(n - 1) + Fib(n - 2);
}
int main(){
    freopen("STAIRCASE.inp","r",stdin);
    freopen("STAIRCASE.out","w",stdout);
    int n;
    cin>>n;
    cout<<Fib(n);
}
