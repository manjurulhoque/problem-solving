#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int m = 1;
        vector<int> ans;

        while(n)
        {
            int d = n % 10;
            if( d * m) ans.push_back(d * m);
            n /= 10;
            m *= 10;
        }

        cout<<ans.size()<<endl;
        for(auto u : ans) cout<<u<<" "<<endl;
    }


    return 0;
}
