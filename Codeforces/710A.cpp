#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int c = 0;
    if(s[0] == 'a' || s[0] == 'h' )
        c++;
    if(s[1] == '1' || s[1]=='8')
        c++;
    if(c == 0)
        cout<<8<<endl;
    else if(c == 1)
        cout<<5<<endl;
    else
        cout<<3<<endl;

    return 0;
}
