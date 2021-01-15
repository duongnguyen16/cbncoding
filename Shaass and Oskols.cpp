#include<bits/stdc++.h>
using namespace std;
int a[10000];
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    int m;
    cin >> m;
    for (int i = 1; i <= m; i++) {
        int xi, yi;
        cin >> xi >> yi;
        a[xi + 1] += a[xi] - yi;
        a[xi - 1] += yi-1;
        a[xi]=0;
    }
    for (int i = 1; i <= n; i++) cout << a[i] << endl;
}
