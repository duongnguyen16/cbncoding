#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,dem = 0;
    cin>>n;
    string s;
    cin>>s;
  for ( long long i = 0;i<=s.size() - 1;i++)
        if ( s[i] == s[i+1])
        dem++;
  cout<<dem;
}
