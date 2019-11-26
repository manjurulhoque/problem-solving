#include<bits/stdc++.h>
using namespace std;

/// Accepted

int main()
{
    int tc, c = 0;
    cin>>tc;

    while(tc--) {
        int p, q;
        cin>>p>>q;

        if(q - p >= 2) c++;
    }

    cout<<c<<endl;

    return 0;
}
