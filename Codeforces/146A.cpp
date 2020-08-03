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

    int n;
    cin>>n;
    string s;
    cin>>s;
    int a = 0, b = 0;
    bool la = true, lb = true;
    for(int i = 0; i < s.size() / 2; i++) {
        if(s[i] == '4' || s[i] == '7') {a += s[i] - '0';}
        else la = false;
    }

    for(int i = s.size() / 2; i < s.size(); i++) {
        if(s[i] == '4' || s[i] == '7') { b += s[i] - '0';}
        else lb = false;
    }

    if(a == b && la && lb) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
