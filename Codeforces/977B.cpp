#include<bits/stdc++.h>
using namespace std;

/// Accepted

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;
    string str;
    cin>>str;

    unordered_map<string, int> mymap;

    int cnt = 0;
    string ans;

    for(int i = 1; i < n; i++)
    {
        string tmp = str.substr(i - 1, 2);
        mymap[tmp]++;

        if(mymap[tmp] > cnt)
        {
            ans = tmp;
            cnt = mymap[tmp];
        }
    }

    cout<<ans<<endl;

    return 0;
}

