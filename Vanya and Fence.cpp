#include <iostream>

using namespace std;
int main()
{
    long long n,h;
    cin>>n>>h;
    long long kq=0;
    for(int i=1;i<=n;i++) { int x;
    cin>>x;
    if (x>h) kq+=2;
    else kq++;}
    cout<<kq;
    return 0;
}
