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
        string s, s1;
        cin>>s;
        s1 = s[0];
        for (int i = 1; i < s.length() - 2; i += 2)
        {
            s1 += s[i];
        }
        s1 += s[s.length()-1];
        cout<<s1<<endl;
    }

    return 0;
}
