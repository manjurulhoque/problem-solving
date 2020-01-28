#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n;
    cin>>n;
    ll arr[n], q;

    for(ll i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cin>>q;
    sort(arr, arr + n);
    for(ll i = 0; i < q; i++)
    {
        ll tmp, c = 0;
        cin>>tmp;
        for(ll j = 0; j < n; j++)
        {
            if(arr[j] <= tmp) c++;
            else break;
        }
        cout<<c<<endl;
    }

    return 0;
}

