#include<bits/stdc++.h>
using namespace std;

/// Accepted

int main()
{
    int tc, c = 0;
    cin>>tc;

    vector<int> home;
    vector<int> guest;

    while(tc--)
    {
        int n, m;
        cin>>n>>m;
        home.push_back(n);
        guest.push_back(m);
    }

    int l = home.size();

    for(int i = 0; i < l; i++)
    {
        for(int j = 0; j < l; j++)
        {
            if(i != j && home[i] == guest[j]) c++;
        }
    }

    cout<<c<<endl;

    return 0;
}
