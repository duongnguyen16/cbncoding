#include <bits/stdc++.h>
using namespace std;
const int maxa=5;
int a[maxa];
bool ss(int a,int b){return a<b;}
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+1+n,ss);
    for(int i=1;i<=n;i++) cout<<a[i]<<" ";
}
