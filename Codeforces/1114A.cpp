#include<bits/stdc++.h>
using namespace std;

/// Accepted

int main()
{
    int x, y, z, a, b, c;
    cin>>x>>y>>z;
    cin>>a>>b>>c;

    if(x <= a && y <= (a + b - x) && z <= (a + b + c - x - y)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}

