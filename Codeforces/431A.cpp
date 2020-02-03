#include<bits/stdc++.h>
using namespace std;

/// Accepted

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a[4];
    cin>>a[0]>>a[1]>>a[2]>>a[3];

    string s;
    cin>>s;

    int l = s.size(), ans = 0;
    for(int i = 0; i < l; i++)
    {
        if(s[i] == '1') ans += a[0];
        else if(s[i] == '2') ans += a[1];
        else if(s[i] == '3') ans += a[2];
        else if(s[i] == '4') ans += a[3];
    }

    cout<<ans<<endl;

    return 0;
}

