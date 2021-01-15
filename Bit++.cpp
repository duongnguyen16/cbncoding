#include<bits/stdc++.h>
#define lap(i,a,b) for(int i=a;i<=b;i++)
#define lap1(i,a,b) for(int i=a;i>=b;i++)
#define neu(x,bang,y) if (x==y)
#define thi else
#define ll long long
#define str string
#define bang(a,b) if(a==b)
#define nho(a,b) if(a<b)
#define lon(a,b) if(a>b)
using namespace std;
ll a[1000000], b[1000000];
bool ss(int a, int b) { return a > b; }
ll max3so(ll a, ll b, ll c) {
    int kq;
    if (a > b) kq = a;
    else kq = b;
    if (kq > c) return kq;
    else return c;
}
ll min3so(ll a, ll b, ll c) {
    int kq;
    if (a < b) kq = a;
    else kq = b;
    if (kq < c) return kq;
    else return c;
}
ll n, kq, x=0, y, z, so1 = 0, so2 = 0, so3 = 0;
int main() {
   cin>>n;
   str test;
   lap(i,1,n){
   cin>>test;
   if (test=="X++" || test=="++X") x++;
   else x--;
    }
    cout<<x;

}

