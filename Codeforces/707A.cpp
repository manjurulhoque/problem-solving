#include<bits/stdc++.h>
using namespace std;

/// Accepted

int main()
{
    int n, m, b = 0, c = 0;
    cin>>n>>m;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            char cc;
            cin>>cc;
            if(cc == 'B' || cc == 'W' || cc == 'G') b++;
            else c++;
        }
    }

    cout<<((c > 0) ? "#Color" : "#Black&White");
    cout<<endl;

    return 0;
}

