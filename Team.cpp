#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int kq=0;
    for(int i=1;i<=n;i++){
        int a,b,c;
        cin>>a>>b>>c;
        int total=0;
        if (a==1) total++;
        if (b==1) total++;
        if (c==1) total++;
        if (total>=2) kq++;
    }
    cout<<kq;
 
}