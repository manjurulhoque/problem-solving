#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s, n;
    cin>>s>>n;

    bool can_win = true;

    for(int i = 1; i <= n; i++) {
        int x, y;
        cin>>x>>y;
        if(x > s) {
            can_win = false;
        }
        else {
            s += y;
            can_win = true;
        }
    }

    if(can_win) puts("YES");
    else puts("NO");

    return 0;
}

