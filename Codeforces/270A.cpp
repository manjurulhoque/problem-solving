#include<bits/stdc++.h>
using namespace std;

/// Accepted

int main()
{
    int n;
    cin>>n;

    while(cin>>n)
    {
        puts(360 % (180 - n) ? "NO" : "YES");
    }
}
