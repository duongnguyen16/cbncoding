#include <iostream>

using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int a1=0,a2=0;
    for(int i=0;i<=n-1;i++){
            char test=s[i];
        if (test=='A') a1++;
    else a2++;
    }
    if (a1>a2) cout<<"Anton";
    else if (a1<a2) cout<<"Danik";
    else cout<<"Friendship";
}
