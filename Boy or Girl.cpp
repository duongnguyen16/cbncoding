#include <bits/stdc++.h>
using namespace std;
const int maxa=100003;
int b[maxa];
int main() {
    string s;
    cin>>s;
    int sokytu=0;
    int n=s.size();
    for(int i=0;i<=n-1;i++){
        int a=s[i];
        if (b[a]==false) {b[a]=true;sokytu++;}
    }
 if (sokytu%2==1) cout<<"IGNORE HIM!";
	else cout<<"CHAT WITH HER!";
    }
