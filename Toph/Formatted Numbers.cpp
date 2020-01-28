#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s, ss;

    cin>>s;
    reverse(s.begin(), s.end());

    for(int i = 0; i < s.size(); i++)
    {
        if((i + 1) % 3 == 0)
        {

            ss[i] = s[i];
            ss[i + 1] = ',';
        }
        else
        {
            ss[i] = s[i];
        }
    }
    reverse(ss.begin(), ss.end());

    return 0;
}

