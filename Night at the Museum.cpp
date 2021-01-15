#include <iostream>

using namespace std;
char a[10000];
int main()
{
    string s;
    cin>>s;
    int sum=0;
    a[0]='a';
    for(int i=0;i<=s.size()-1;i++){
        a[i+1]=s[i];
    }
    for(int i=0;i<=s.size()-1;i++){
        int s1=abs(a[i+1]-a[i]);
        int s2=0,v12,v22;
        if (('z'-a[i])>(a[i]-'a')) {v12=abs(a[i]-'a');v22=abs('z'-a[i+1]);}
        else {v12=abs('z'-a[i]);v22=abs(a[i+1]-'a');}
        s2=v12+v22+1;
        if (s1<s2) sum+=abs(s1);
        else sum+=abs(s2);
        //cout<<a[i]<<" "<<a[i+1]<<" "<<s1<<" "<<v12<<" "<<v22<<" "<<s2<<endl;
    }
    cout<<sum;
}
