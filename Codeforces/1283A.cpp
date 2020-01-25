#include<bits/stdc++.h>
using namespace std;

/// Accepted

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, h, m;

    cin>>t;

    while(t--)
    {
        cin>>h>>m;
        int total = 60 - m;
        total += (24 - h - 1) * 60;

        cout<<total<<endl;
    }

    return 0;
}

