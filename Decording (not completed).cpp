#include<bits/stdc++.h>
using namespace std;
const int maxa=100003;
char kq[maxa];
int main(){
    string s;
    cin>>s;
    int n=s.size();
    int dem=1;
    int total=n;
    for(int i=1;i<=n;i++){
            int target;
        if (total%2==1) {target=total/2+1;}
        else {target=total/2;}
        kq[dem]=s[target];
        dem++;
        for(int i=target;i<=total;i++){
            s[i+1]=s[i];
        }
        total--;

    }
    for(int i=1;i<=n;i++) cout<<kq[i];
    }
