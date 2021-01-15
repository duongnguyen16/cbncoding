#include<bits/stdc++.h>
using namespace std;
const int maxa = 100003;
int a[maxa],b[maxa];
bool ss(int a, int b) {return a<b;}
int main() {
    int n;
    cin>>n;
    int x=0,y=0;
    for(int i=1;i<=n;i++) cin>>a[i];
    int i=1,j=1,full=n;
    while (j<=n){
        if (j%2==1){
            x+=max(a[i],a[full]);
            if (a[i]>a[full]) i++;
            else full--;
        }
        else {
            y+=max(a[i],a[full]);
            if (a[i]>a[full]) i++;
            else full--;
        }
        j++;
    }
    cout<<x<<" "<<y;
}
