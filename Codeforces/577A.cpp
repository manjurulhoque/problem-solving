#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, x, c = 0;
    cin>>n>>x;

    for(long long i = 1; i <= n; i++)
    {
        for(long long j = 1; j <= n; j++)
        {
            if(i * j == x) c++;
        }
    }

    cout<<c<<endl;

    return 0;
}

