#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll tmp;
        cin>>tmp;

        if(tmp % 2 == 0)
        {
            cout<<(tmp * (tmp - 1)) - 1<<endl;
        }
        else
        {
            cout<<(tmp * (tmp - 1)) + 1<<endl;
        }
    }

    return 0;
}
