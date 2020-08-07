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
        vi a;
        For(i, n)
        {
            int m;
            cin>>m;
            a.pb(m);
        }

        sort(a.begin(), a.end());
        bool flag = true;
        for(int i = 0; i < n - 1; i++)
        {
            if((a[i + 1] -  a[i]) > 1) {
                flag = false;
                break;
            }
        }

        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
