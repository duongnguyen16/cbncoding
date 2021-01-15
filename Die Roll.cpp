#include<bits/stdc++.h>
using namespace std;
int main(){
    double y,w;
    cin>>y>>w;
    int a;
    if (y>w) a=y;
    else a=w;
    int tuso=6-(a-1);
    if (tuso==1) cout<<"1/6";
    else if (tuso==2) cout<<"1/3";
    else if (tuso==3) cout<<"1/2";
    else if (tuso==4) cout<<"2/3";
    else if (tuso==5) cout<<"5/6";
    else if (tuso==6) cout<<"1/1";

}
