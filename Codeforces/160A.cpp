#include<bits/stdc++.h>
using namespace std;

/// Accepted

int main()
{
    int t;
    cin>>t;
    int coins[t], sum = 0;

    for(int i = 0; i < t; i++) {
        cin>>coins[i];
        sum += coins[i];
    }
    int n = sizeof(coins)/sizeof(coins[0]);

    sort(coins, coins + n);
    int mincoinsum = 0, c = 0;
    for(int i = t - 1; i >= 0; i--) {
        mincoinsum += coins[i];
        if(mincoinsum > (sum - mincoinsum)) {
            c++;
            break;
        }
        c++;
    }

    cout<<c<<endl;

    return 0;
}

