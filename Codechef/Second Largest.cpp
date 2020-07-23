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
        vi ans;
        int a, b, c;
        cin>>a>>b>>c;
        ans.pb(a);ans.pb(b);ans.pb(c);
        sort(ans.begin(), ans.end());
        cout<<ans[ans.size() - 2]<<endl;
    }

    return 0;
}
