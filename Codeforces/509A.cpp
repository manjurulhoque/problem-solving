#include<bits/stdc++.h>
using namespace std;

/// Accepted

const int max_n = 111;

int n, a[max_n][max_n];

int main()
{
    int n;
    cin>>n;

    int ans = 1;
    for (int i = 1; i <= n; ++i)
    {
        a[i][1] = a[1][i] = 1;
    }
    for (int i = 2; i <= n; ++i)
    {
        for (int j = 2; j <= n; ++j)
        {
            a[i][j] = a[i - 1][j] + a[i][j - 1];
            ans = max(ans, a[i][j]);
        }
    }
    cout << ans << endl;

    return 0;
}

