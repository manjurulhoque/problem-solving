#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin>>n;

    for(int i = 1; i <= n; i++)
    {
        cin>>m;
        vector<int> v;
        vector<int>::iterator ip;

        int s;

        for(int j = 0; j < m; j++)
        {
            cin>>s;
            v.push_back(s);
        }
        std::sort(v.begin(), v.end());

        ip = std::unique(v.begin(), v.begin() + v.size());
        v.resize(std::distance(v.begin(), ip));

        printf("Case %d: %d\n", i, v.size());
    }

    return 0;
}
