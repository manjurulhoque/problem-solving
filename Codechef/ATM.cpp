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

    int x; double y;

    cin>>x>>y;

    cout<<setprecision(2)<<fixed;
    if(x >= y) {
        cout<<y<<endl;
    }
    else if(x % 5 == 0 && x + 0.5 <= y) {
        double z = y - (double)x - 0.50;
        cout<<z<<endl;
    }
    else {
        cout<<y<<endl;
    }

    return 0;
}
