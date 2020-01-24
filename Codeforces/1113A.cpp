#include<bits/stdc++.h>
using namespace std;

/// Accepted

int main()
{
    int n, v;
    cin>>n>>v;

    int current = 0, required = n - 1, cost = 0;

    for(int i = 1; i < n; i++)
    {
        int to_fill = min(v - current, required);
        current += to_fill;
        current += -1;

        cost += to_fill * i;
        required -= to_fill;
    }

    cout<<cost<<endl;

    return 0;
}

