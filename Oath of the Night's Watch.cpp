#include<bits/stdc++.h>
using namespace std;
long long a[1000000],b[1000000];
bool ss(int a, int b){return a<b;}
int main(){
   int n;
   cin>>n;
   for(int i=1;i<=n;i++) cin>>a[i];
   int kq=0;
   if (n<3) cout<<0;
   else {
        sort(a+1,a+1+n,ss);
        int x=a[1],y=a[n];
        for(int i=2;i<=n-1;i++){
            if (x<a[i] && y>a[i]) kq++;
        }
    cout<<kq;
   }
}

