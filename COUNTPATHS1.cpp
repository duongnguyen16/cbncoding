#include<bits/stdc++.h>
using namespace std;
int a[100][100];
int sum=0;
    int n,m;
int f(int i, int j){
    if (i==1 && j==1) return a[1][1];
    else if (i<1 || i>n || j<1 || j>m) return 0;
    else return f(i,j-1)+f(i-1,j);
}
int main(){
	freopen("COUNTPATHS1.inp","r",stdin);
    freopen("COUNTPATHS1.out","w",stdout);
    a[1][1]=1;
    cin>>n>>m;
    cout<<f(n,m);
}
