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

    int n, m;
    vi a;
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        cin>>m;
        a.pb(m);
    }

    sort(a.begin(), a.end());
    //for(int i = 0; i < n; i++) cout<<a[i]<<endl;
    if(a[0] == a[n/2]) {
        cout<<"NO"<<endl; return 0;
    }
    m = a[0];
    for(int i = 1; i < n/2; i++)
    {
        if(m != a[i])
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    m = a[n/2];
    for(int i = n/2 + 1; i < n; i++)
    {
        //cout<<m<<endl;
        if(m != a[i])
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }

    cout<<"YES"<<endl;
    cout<<a[0]<<" "<<a[n/2]<<endl;

    return 0;
}
