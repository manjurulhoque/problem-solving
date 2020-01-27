#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin>>n>>t;

    int r = floor(10 * ((n - 1) > 1 ? (10 * (n - 1)) : 1) / t*t);

    cout<<r<<endl;

    return 0;
}

