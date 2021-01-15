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
    bool ab=false,ac=false,ba=false,bc=false,ca=false,cb=false;
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    if (s1=="A>B") ab=true;
    else if (s1=="A>C") ac=true;
    else if (s1=="B>C") bc=true;
    else if (s1=="B>A") ba=true;
    else if (s1=="C>B") cb=true;
    else if (s1=="C>A") ca=true;
    else if (s1=="A<C") ca=true;
    else if (s1=="B<C") cb=true;
    else if (s1=="B<A") ab=true;
    else if (s1=="C<B") bc=true;
    else if (s1=="C<A") ac=true;
    else if (s1=="A<B") ba=true;
    if (s2=="A>B") ab=true;
    else if (s2=="A>C") ac=true;
    else if (s2=="B>C") bc=true;
    else if (s2=="B>A") ba=true;
    else if (s2=="C>B") cb=true;
    else if (s2=="C>A") ca=true;
    else if (s2=="A<C") ca=true;
    else if (s2=="B<C") cb=true;
    else if (s2=="B<A") ab=true;
    else if (s2=="C<B") bc=true;
    else if (s2=="C<A") ac=true;
    else if (s2=="A<B") ba=true;
    if (s3=="A>B") ab=true;
    else if (s3=="A>C") ac=true;
    else if (s3=="B>C") bc=true;
    else if (s3=="B>A") ba=true;
    else if (s3=="C>B") cb=true;
    else if (s3=="C>A") ca=true;
    else if (s3=="A<C") ca=true;
    else if (s3=="B<C") cb=true;
    else if (s3=="B<A") ab=true;
    else if (s3=="C<B") bc=true;
    else if (s3=="C<A") ac=true;
    else if (s3=="A<B") ba=true;
    if (ab && ac && bc) cout<<"CBA";
    else if (ba && bc && ac) cout<<"CAB";
    else if (ca && cb && ba) cout<<"ABC";
    else if (ba && bc && ca) cout<<"ACB";
    else if (ab && ac && cb) cout<<"BCA";
    else if (ca && cb && ab) cout<<"BAC";
    else cout<<"Impossible";
    }

r      7