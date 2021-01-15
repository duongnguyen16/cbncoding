#include<bits/stdc++.h>
using namespace std;
char a[10000];
int d[10000];
int main(){
    string s;
    getline(cin,s);
    int n=s.size();
    int b=1;int kq=0;
    int dem=0;
    for(int i=0;i<=n-1;i++){
        if (s[i]!=',' && s[i]!='{' && s[i]!=' ' && s[i]!='}') {a[b]=s[i];b++;}
    }
    for(int i=1;i<=b;i++){
        d[a[i]]++;
    }
    for(int i='a';i<='z';i++){
        if (d[i]>0) dem++;
    }
    cout<<dem;
    }
