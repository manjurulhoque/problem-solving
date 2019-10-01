#include<bits/stdc++.h>
using namespace std;

/***
status: Accepted
***/

int main()
{
    string s1 = "hello", s2;
    cin>>s2;

    int a = 0, b = 0;

    for(int i = 0; i < s2.size(); i++)
    {
        if(s1[a] == s2[i])
        {
            a++;
            b++;
        }
    }

    if(b == 5)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
