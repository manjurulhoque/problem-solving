#include<bits/stdc++.h>
using namespace std;

#define ff                first
#define ss                second
#define pii               pair<int,int>
#define vi                vector<int>
#define mp                make_pair
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

    int a[n+1], days = -1, sum = 0;
    a[0] = 0;
    for(int i = 1; i <= n; i++)
    {
        cin>>a[i];
        sum += a[i];
        int c = min(8, sum);
        k -= c;
        sum -= c;
        (k <= 0 && days < 0) ? days = i : 0;
    }

    cout<<days<<endl;

    return 0;
}
