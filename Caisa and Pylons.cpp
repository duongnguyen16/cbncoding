#include<bits/stdc++.h>
using namespace std;
const int maxa = 100003;
int a[maxa],b[maxa];
bool ss(int a, int b) {return a<b;}
int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1,ss);
    cout<<a[n];
}
