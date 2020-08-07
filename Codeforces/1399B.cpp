#include<bits/stdc++.h>
using namespace std;

#define ff                first
#define ss                second
#define pii               pair<int,int>
#define vi                vector<int>
#define mp                make_pair
#define For(i, n)         for (int i = 0; i < n; i++)
#define ll                long long
#define ull               unsigned long long
#define pb                push_back
#define ps                push
#define pf                push_front
#define mp                make_pair
#define fast_in_out       ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{

    fast_in_out;

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll a[n+2], b[n+2], sa = 2000000000, sb = 2000000000;
        For(i, n)
        {
            cin>>a[i];
            sa = min(sa, a[i]);
        }
        For(i, n)
        {
            cin>>b[i];
            sb = min(sb, b[i]);
        }
        ll s = 0;
        For(i, n)
        {
            s += max((a[i] - sa), (b[i] - sb));
        }

        cout<<s<<endl;
    }

    return 0;
}
