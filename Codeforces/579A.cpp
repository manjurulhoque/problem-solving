#include<bits/stdc++.h>
using namespace std;

/// Accepted

int main()
{
    int t, ans;

    while(scanf("%d", &t) == 1)
    {
        ans=0;
        while (t)
        {
            if (t&1)
            {
                ans++;
            }
            t = t>>1;
        }
        printf("%d\n",ans);
    }

    return 0;
}
