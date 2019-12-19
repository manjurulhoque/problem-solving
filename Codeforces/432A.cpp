#include<bits/stdc++.h>
using namespace std;

/// Accepted

int main()
{
    int n, k, c = 0;
    cin>>n>>k;

    while(n--)
    {
        int tmp;
        cin>>tmp;

        if((5 - tmp) >= k) c++;
    }

    cout<<c/3<<endl;

    return 0;
}

