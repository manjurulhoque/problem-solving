#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int x, y;
    cin >> x >> y;

    if (x > 3)
        puts("YES");
    else if (x == 1)
        puts(y == 1 ? "YES" : "NO");
    else
        puts(y <= 3 ? "YES" : "NO");
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
        solve();
}
