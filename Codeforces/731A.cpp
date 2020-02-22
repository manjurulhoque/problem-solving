#include<bits/stdc++.h>
using namespace std;

int main()
{
    //cout<<abs('e' - 'u');

    string s;
    cin>>s;

    int total = 0;
    int l = s.size();

    total += min(abs(26 - (s[0] - 'a')), abs('a' - s[0]));

    for(int i = 0; i < l - 1; i++)
    {
        if(s[i] < s[i + 1])
        {
            total += min(abs(26 - (s[i + 1] - s[i])), abs(s[i] - s[i + 1]));
        }
        else
        {
            total += min(abs(26 - (s[i] - s[i + 1])), abs(s[i + 1] - s[i]));
        }
    }

    cout<<total<<endl;

    return 0;
}
