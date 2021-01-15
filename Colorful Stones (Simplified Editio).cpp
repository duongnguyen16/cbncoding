#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    int n=t.size();
    int x=0,kq=1;
    for(int i=0;i<=n;i++){
        if (s[x]==t[i]) {kq++,x++;}
    }
    cout<<kq;
}
