#include <bits/stdc++.h>
using namespace std;
const int maxa=5;
int a[maxa][maxa];
int main(){
    int x,y;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++) {cin>>a[i][j];if (a[i][j]==1) {x=i;y=j;}}
    }
cout<<abs(3-x)+abs(3-y);

}
