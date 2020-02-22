#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n, c;
    cin>>n>>c;

    ll a[n];

    for(int i = 0; i < n; i++) cin>>a[i];

    int w = 0;

    for(int i = 0; i < n - 1; i++)
    {
        if(a[i + 1] - a[i] > c) w = 0;
        else w++;
    }

    cout<<w+1<<endl;

    return 0;
}
