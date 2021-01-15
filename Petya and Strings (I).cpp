#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin >> s;
	long long n = s.size();
	long long test1 = 0;
	for (long long i = 0; i <= n; i++) {
		char a = s[i];
		if (a >= 'A' && a <= 'Z') { test1 += 32; test1 += a; }
		else test1 += a;
	}
	string x;
	cin >> x;
	long long m = x.size();
	long long test2 = 0;
	for (long long i = 0; i <= m; i++) {
		char a = x[i];
		if (a >= 'A' && a <= 'Z') { test2 += 32; test2 += a; }
		else test2 += a;
	}
	if (test1==test2) cout<<0;
	else if (test1>test2) cout<<1;
	else cout<<-1;
}
