#include <iostream>

using namespace std;
int main()
{
    long long limak,bob;
    cin>>limak>>bob;
    long long i=0;
    while(limak<=bob){
        i++;
        limak=limak*3;
        bob=bob*2;
    }
    cout<<i;
}
