#include<bits/stdc++.h>
using namespace std;

/// Accepted

int main()
{
    int a, b, c;
    cin>>a>>b>>c;

    cout<<min(a, b + c) + min(c, a + b) + min(b, a + c)<<endl;

    return 0;
}
