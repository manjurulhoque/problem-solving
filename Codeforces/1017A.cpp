#include<bits/stdc++.h>
using namespace std;

/// Accepted

int main()
{
    int tc, a, b, c, d, rank = 1, x = 0;
    cin>>tc;

    for(int i = 0; i < tc; i++) {
        cin>>a>>b>>c>>d;
        int sum = a + b + c + d;
        if(i == 0) x = sum;
        else if(sum > x) ++rank;
    }

    cout<<rank<<endl;

    return 0;
}
