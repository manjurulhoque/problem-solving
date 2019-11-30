#include<bits/stdc++.h>
using namespace std;

/// Accepted

int main()
{
    int n;
    cin>>n;

    for(int i = 1; i < n; i++)
    {
        if(i % 2 == 1)
        {
            printf("I hate  that ");
        }
        else
        {
            printf("I love  that ");
        }
    }
    if(n % 2 == 1)
    {
        printf("I hate it\n");
    }
    if(n % 2 == 0)
    {
        printf("I love it\n");
    }

    return 0;
}


