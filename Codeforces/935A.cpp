#include<bits/stdc++.h>
using namespace std;

/// Accepted

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, sum = 0;
    cin>>n;

    for(int i = 1; i < n; i++)
    {
        if(n % i == 0) sum++;
    }

    cout<<sum<<endl;

    return 0;
}

