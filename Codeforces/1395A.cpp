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
        ll a[4], even = 0, odd = 0;
        cin>>a[0]>>a[1]>>a[2]>>a[3];

        for(ll i = 0; i < 4; i++)
        {
            if(a[i] % 2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }

        cout<<even<<" "<<odd<<endl;

    }

    return 0;
}
