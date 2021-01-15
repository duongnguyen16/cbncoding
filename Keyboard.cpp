#include<bits/stdc++.h>
#define lap(i,a,b) for(int i=a;i<=b;i++)
// define lap1(i,a,b) for(int i=a;i>=b;i++)
//define neu(x,bang,y) if (x==y)
//define thi else
#define ll long long
#define str string
//define ghi(a) cout<<a;
using namespace std;
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
string  solve(string s1, char c) {
    string s = "qwertyuiopasdfghjkl;zxcvbnm,./";
    string kq;
    int len = s1.length();
    for (int i = 0; i < len; i++) {
        int in = s.find(s1[i]);
        if (c == 'R') {
            kq += s[in - 1];

        }
        else {
            kq += s[in + 1];
        }

    }
    return kq;

}


ll sum1 = 0, sum2 = 0, sum3 = 0;
ll n, kq, y, z, so1 = 0, so2 = 0, so3 = 0, sum = 0;
str s;
int a[10000];
int main() {
    char chedogo;
    cin >> chedogo;
    cin >> s;
    cout << solve(s, chedogo);
}

