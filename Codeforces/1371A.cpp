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
        if(n == 1) cout<<1<<endl;
        else if(n == 2) cout<<1<<endl;
        else if(n == 3) cout<<2<<endl;
        else if(n == 4) cout<<2<<endl;
        else {
            if(n % 2 == 0) cout<<(n / 2)<<endl;
            else cout<<(n / 2) + 1<<endl;
        }
    }

    return 0;
}
