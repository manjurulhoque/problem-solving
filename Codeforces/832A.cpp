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

    if(n == 1 && k == 1) cout<<"YES"<<endl;
    else {
        if(n % k < k) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }

    return 0;
}
