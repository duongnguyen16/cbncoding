#include<bits/stdc++.h>
using namespace std;
int a[100][100];
int sum=0;
    int n,m;
int f(int i, int j){
    if (i==1 && j==1) return a[1][1];
    else if (i<1 || i>n || j<1 || j>m || a[i][j]==-1) return 0;
    else return f(i,j-1)+f(i-1,j);
}
int main(){
    freopen("COUNTPATHS2.inp","r",stdin);
    freopen("COUNTPATHS2.out","w",stdout);
    a[1][1]=1;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++) cin>>a[i][j];
    }
    cout<<f(n,m);
}
