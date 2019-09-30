#include<bits/stdc++.h>
using namespace std;

/***
status: Accepted
***/

int main()
{
    long long n, orr = 0, x;

    cin>>n;

    for(int i = 0; i < n; i++)
    {
        cin>>x;
        if(i == 0) orr = x;
        else orr ^= x;
    }

    cout<<orr<<endl;

    return 0;
}
