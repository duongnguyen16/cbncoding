#include<bits/stdc++.h>
#define lap(i,a,b) for(int i=a;i<=b;i++)
#define neu(x,bang,y) if (x==y)
#define thi else
#define ll long long
using namespace std;
ll a[1000000],b[1000000];
bool ss(int a, int b){return a>b;}
ll max3so(ll a, ll b,ll c){
int kq;
if (a>b) kq=a;
else kq=b;
if (kq>c) return kq;
else return c;
}
ll min3so(ll a, ll b, ll c){
int kq;
if (a<b) kq=a;
else kq=b;
if (kq<c) return kq;
else return c;

 }
ll n,kq,x,y,z,so1=0,so2=0,so3=0;
int main(){
   int n;
   cin>>n;
   lap(i,1,n) cin>>a[i];
    lap(i,1,n) {
        if (a[i]==1) so1++;
        else if(a[i]==2) so2++;
        else so3++;
    }
    int minn=min3so(so1,so2,so3);
    if (minn>=1) {
    cout<<minn<<endl;
    lap(i,1,minn){
    lap(j,1,n){if (a[j]==1) {cout<<j<<" ";a[j]=false;break;}}
    lap(j,1,n){if (a[j]==2) {cout<<j<<" ";a[j]=false;break;}}
    lap(j,1,n){if (a[j]==3) {cout<<j<<" ";a[j]=false;break;}}
    cout<<endl;
    }}
    else cout<<0;
}

