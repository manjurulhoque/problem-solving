#include<bits/stdc++.h>
using namespace std;

/// Accepted

int main()
{
    int k, n, w, r = 0;
    cin>>k>>n>>w;

    for(int i = 1; i <= w; i++) r += i * k;

    cout<<(r > n ? r - n : 0)<<endl;

    return 0;
}

