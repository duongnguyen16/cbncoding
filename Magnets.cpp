#include <bits/stdc++.h>
using namespace std;
const int maxa=100003;
int a[maxa];
int main(){
    int n;
    cin>>n;
    int dem=1;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n-1;i++) if (a[i+1]!=a[i]) dem++;
    cout<<dem;
}
