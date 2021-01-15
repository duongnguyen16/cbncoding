#include<bits/stdc++.h>
using namespace std;
int a[10000],b[10000];
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    for (int i=1;i<=n;i++) b[a[i]]=i;
    for(int i=1;i<=n;i++) cout<<b[i]<<" ";
    }

