#include<bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0);
    cout.tie(0);
    iostream::sync_with_stdio(0);

    int T;
    cin >> T;

    while(T-- > 0)
    {
        string s;
        cin>>s;
        int len = s.size();
        if(len == 1)
        {
            cout<<s<<endl;
        }
        else
        {
            set<char> res;
            for(int i = 0; i < len; i++)
            {
                if(s[i] == s[i+1])
                {
                    i++;
                }
                else
                {
                    res.insert(s[i]);
                }
            }
            cout<<string(res.begin(), res.end())<<endl;
        }
    }

    return 0;
}

