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
    vector<int> v;

    for(int i = 1; i <= n; i++)
    {
        int y;
        cin>>y;
        v.push_back(y);
    }

    map<int, int> ma;
    For(i, n) ma[v[i]] = i + 1;
    int f = 0;
    if (ma.size() >= k) {
        printf("YES\n");
        for(auto &x : ma) {
            cout << x.second << " ";
            f++;
            if (f == k) return 0;
        }
    }
    else printf("NO\n");

    return 0;
}
