#include<bits/stdc++.h>
using namespace std;

/// Accepted

int main()
{
    int tc;
    cin>>tc;
    double c = 0.0;

    for(int i = 1; i <= tc; i++)
    {
        int tmp;
        cin>>tmp;
        c += (double)tmp/100;
    }

    printf("%.12f\n", (double)(c/tc)*100);

    return 0;
}

