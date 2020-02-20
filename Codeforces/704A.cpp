#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin>>n>>q;

    int applications[n + 1], unread = 0, total = 0;

    memset(applications, 0, sizeof(applications));

    for(int i = 1; i <= q; i++)
    {
        int x, t;
        cin>>x>>t;
        if(x == 1)
        {
            unread += x;
            total += x;
            applications[t] += x;
            cout<<unread<<endl;
        }
        else if(x == 2)
        {
            unread -= applications[t];
            applications[t] = 0;
            cout<<unread<<endl;
        }
        else if(x == 3)
        {
            total -= t;
            cout<<total<<endl;
        }
    }

    return 0;
}
