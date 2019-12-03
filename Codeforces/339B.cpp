#include<bits/stdc++.h>
using namespace std;

/// Accepted

int main()
{
    long long int n,m,sum,i;
    scanf("%lld%lld",&n,&m);

    int a[100005];

    for(i=0; i<m; i++)
    {
        scanf("%lld",&a[i]);
    }
    sum = a[0] - 1;
    for(i = 0; i < m - 1; i++)
    {
        if(a[i] > a[i +1 ])
        {
            sum+=a[i+1] + n - a[i];
        }
        else
            sum+=a[i+1] - a[i];
    }
    printf("%lld\n", sum);
    return 0;
}
