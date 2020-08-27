#include<bits/stdc++.h>
using namespace std;

int main()
{
    bool prime[1000000 + 1];
    memset(prime, true, sizeof(prime));

    for (int p = 2; p*p <= 1000000; p++)
    {
        if (prime[p])
        {
            for (int i = p*p; i <= 1000000; i += p) prime[i] = false;
        }
    }

    long long int t;
    cin>>t;

    while(t--)
    {
        long long int n;
        cin>>n;
        long long int sq = sqrt(n);

        if(!prime[n] && sq * sq == n) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}

