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
    vi a;
    vector<int>::iterator it;
    while(t--)
    {
        int m;
        cin>>m;
        it = find(a.begin(), a.end(), m);
        if(it == a.end()) { // doesn't exists
            a.pb(m);
        } else {
            a.erase(remove(a.begin(), a.end(), m), a.end());
            a.pb(m);
        }
    }

    cout<<a.size()<<endl;
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
