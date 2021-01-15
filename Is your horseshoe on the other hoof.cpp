
#include<bits/stdc++.h>
using namespace std;
const int maxa=100003;
int a[maxa];
int main(){
    int dem=0;
    for(int i=1;i<=4;i++) cin>>a[i];
    for(int i=1;i<=3;i++){
        for(int j=i+1;j<=4;j++) if (a[j]) {if (a[i]==a[j]) {dem++;a[j]=false;}}
    }
    cout<<dem;

}
