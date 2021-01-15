#include<bits/stdc++.h>
using namespace std;
const int maxa=100003;
int a[maxa];
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    int cs=0;
    int dem=0;
    for(int i=1;i<=n;i++){
    if (a[i]==-1) {if (cs==0) dem++; else cs-=1;}
        else cs+=a[i];
    }
    cout<<dem;
}
