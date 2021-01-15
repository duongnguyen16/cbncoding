#include<bits/stdc++.h>
using namespace std;
char a[10000];
bool ss(int a,int b){return a<b;}
int b[10000];
int main() {
    string s;
    cin>>s;
    int k=1;
    for(int i=0;i<=s.size();i++) {

    if (s[i]!='+') {a[k]=s[i];k++;

        }
    }
    sort(a+1,a+1+k,ss);
    for(int i=3;i<=k-1;i++){
        cout<<a[i]<<"+";
    }
    cout<<a[k];
}
