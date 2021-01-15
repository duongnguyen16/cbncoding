#include<bits/stdc++.h>
using namespace std;
const int oo=-1e9;
int a[100][100];
int n,m;
int f(int i, int j){
    if(i==1 && j==1) return a[1][1];
    else if (i<1 || i>n || j<1 || j>m) return oo;
    else return max(f(i-1,j),f(i,j-1)) + a[i][j];
}
int main(){
    freopen("PATH.inp","r",stdin);
    freopen("PATH.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++) cin>>a[i][j];
    }
    cout<<f(n,m);
}
