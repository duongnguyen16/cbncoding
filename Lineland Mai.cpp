#include<bits/stdc++.h>
using namespace std;
long long a[1000000],b[1000000];

int main(){
   long long n;
   cin>>n;
   for(long long i=1;i<=n;i++) cin>>a[i];
   cout<<abs(a[1]-a[2])<<" "<<abs(a[1]-a[n])<<endl;
   long long thap,cao;
   for(long long i=2;i<=n-1;i++){
        thap=min(abs(a[i]-a[i-1]),abs(a[i]-a[i+1]));
        cao=max(abs(a[i]-a[1]),abs(a[i]-a[n]));
        cout<<thap<<" "<<cao<<endl;
   }
   cout<<abs(a[n]-a[n-1])<<" "<<abs(a[1]-a[n]);
}

