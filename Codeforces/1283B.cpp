#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t, n, k;

    cin>>t;

    while(t--)
    {
        cin>>n>>k;
        ll mink = k / 2;
        ll maxk = k - k / 2;

        ll ans = (n / k) * k + maxk;

        if(n % k != 0 && ans < n) cout<<ans<<endl;
        else cout<<n<<endl;
    }

    return 0;
}
