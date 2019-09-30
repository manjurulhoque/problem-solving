#include<bits/stdc++.h>
using namespace std;

/***
status: Accepted
***/

int main()
{
    long long n, n1, n2, gcd;

    cin>>n;

    for(long long j = 0; j < n; j++)
    {
        cin>>n1>>n2;

        while(n1 != n2)
        {
            if(n1 > n2)
                n1 -= n2;
            else
                n2 -= n1;
        }
        cout<<n1<<endl;
    }

    return 0;
}

