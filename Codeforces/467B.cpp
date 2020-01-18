#include<bits/stdc++.h>
using namespace std;

/// Accepted

int countOne(long n)
{
    int c = 0;
    while(n != 0)
    {
        n = n & n - 1;
        //cout<<"N: "<<n<<endl;
        c++;
    }

    return c;
}

int main()
{
    int n, m, k;
    cin>>n>>m>>k;

    long soldiers[m + 1];

    for(int i = 0; i <= m; i++)
    {
        cin>>soldiers[i];
    }

    int count = 0;
    long res = 0;

    for(int i = 0; i < m; i++)
    {
        res = soldiers[i] ^ soldiers[m];
        if(countOne(res) <= k) count++;
    }

    cout<<count<<endl;

    return 0;
}

