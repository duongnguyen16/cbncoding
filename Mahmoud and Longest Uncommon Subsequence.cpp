#include<bits/stdc++.h>
using namespace std;
long long a[1000000],b[1000000];

int main(){
   string s1,s2;
   cin>>s1>>s2;
   if (s1==s2) cout<<-1;
   else cout<<max(s1.size(),s2.size());
}

