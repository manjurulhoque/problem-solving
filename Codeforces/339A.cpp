#include<bits/stdc++.h>
using namespace std;

/***
status: Accepted
***/

int main()
{
    string s;

    cin>>s;

    if(s.size() == 1)
    {
        cout<<s<<endl;
        return 0;
    }

    int one = 0, two = 0, three = 0;

    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '1') one++;
        if(s[i] == '2') two++;
        if(s[i] == '3') three++;
    }

    for(int i = 0; i < one; i++)
    {
        if((one - 1) == i && two == 0 && three == 0) cout<<"1";
        else cout<<"1+";
    }

    for(int i = 0; i < two; i++)
    {
        if((two - 1) == i && three == 0) cout<<"2";
        else cout<<"2+";
    }

    for(int i = 0; i < three; i++)
    {
        if((three - 1) == i) cout<<"3";
        else cout<<"3+";
    }

    return 0;
}
