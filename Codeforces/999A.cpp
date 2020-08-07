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

    int n, k, lf = 0, rf = 0;
    cin>>n>>k;
    vi a(n);

    For(i, n) cin>>a[i];

    For(i, n)
    {
        if(a[i] > k) break;
        else lf++;
    }

    for (int i = n - 1; i > 0; i--)
    {
        if(a[i] > k) break;
        else rf++;
    }

    cout<<min(n, lf + rf)<<endl;

    return 0;
}
