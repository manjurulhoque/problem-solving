#include<bits/stdc++.h>
using namespace std;

/// Accepted

int main()
{
    int a, b;
    cin>>a>>b;

    int x = min(a, b), y = 0; a -= x, b -= x;

    if(a > 0) y = a / 2;
    else y = b / 2;

    cout<<x<<" "<<y<<endl;

    return 0;
}

