#include<bits/stdc++.h>
using namespace std;
const int maxa=100003;
int a[maxa];
int main(){
    string s;
    for(int i=1;i<=4;i++){
        cin>>a[i];
    }
    cin>>s;
    int dem=0;
    for(int i=0;i<s.size();i++){
        for(int j=1;j<=4;j++){
            if (s[i]-'0'==j) dem+=a[j];
        }
    }
    cout<<dem;
}
