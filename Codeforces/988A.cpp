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

    int n, k;
    cin>>n>>k;
    set<int> s;
    vector<int> ans;

    for(int i = 1; i <= n; i++)
    {
        int x;
        cin>>x;
        if(s.find(x) == s.end())
        {
            ans.push_back(i);
            s.insert(x);
        }
    }

    if(ans.size() < k) cout<<"NO"<<endl;
    else {
        cout<<"YES"<<endl;
        for (auto i = ans.begin(); i != ans.end(); ++i)
            cout << *i << " ";
    }

    return 0;
}