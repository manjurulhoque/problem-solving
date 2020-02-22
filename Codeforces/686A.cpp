#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n, x;

    cin>>n>>x;

    ll destressed = 0;

    for(ll i = 1; i <= n; i++)
    {
        char c;
        ll p;
        cin>>c>>p;

        if(c == '+')
        {
            x += p;
        }
        else {
            if(p > x) {
                destressed++;
            }
            else
            {
                x -= p;
            }
        }
    }

    cout<<x<<" "<<destressed<<endl;

    return 0;
}
