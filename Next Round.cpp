#include<bits/stdc++.h>
using namespace std;
long long a[1000000],b[1000000];
bool ss(int a, int b){return a>b;}
int main(){
   int n,k,kq=0;
   cin>>n>>k;
   for(int i=1;i<=n;i++) cin>>a[i];
   sort(a+1,a+1+n,ss);
   for(int i=1;i<=n;i++) if (a[i]>0 && a[i]>=a[k]) kq++;
   cout<<kq;
}

