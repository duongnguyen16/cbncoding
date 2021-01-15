#include <iostream>

using namespace std;
char a[10000];
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    string s;
    cin>>s;
    int n=s.size();int kq=0;
    for(int i=0;i<=n-1;i++){
        if (s[i]=='1') kq+=a;
        else if (s[i]=='2') kq+=b;
        else if (s[i]=='3') kq+=c;
        else kq+=d;

    }
    cout<<kq;

}
