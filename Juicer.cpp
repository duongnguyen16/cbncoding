#include <bits/stdc++.h>
using namespace std;
const long long maxa=100003;
long long a[maxa];
int main()
{
    long long n,b,d;
    cin>>n>>b>>d;
    long long kq=0;
    for(long long i=1;i<=n;i++) cin>>a[i];
    int tong=0;
    for(long long i=1;i<=n;i++){
        if (a[i]<=b){
                tong+=a[i];
                if (tong>d) {kq++;tong=0;}
        }
    }
    cout<<kq;
}
