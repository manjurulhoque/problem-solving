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
        vector<int> a;
        int first = -1, last = -1;
        for(int i = 0; i < n; i++)
        {
            int m;
            cin>>m;
            a.push_back(m);
            if(m == 1 && first == -1)
            {
                first = i;
            }
            else if(m == 1)
            {
                last = i;
            }
        }
        //cout<<first<<" "<<last<<endl;
        int total = 0;
        if(first != -1 && last != -1)
        {
            for(int i = first; i < last; i++)
            {
                //cout<<a[i];
                if(a[i] == 0) total++;
            }

            cout<<total<<endl;
        }
        else {
            cout<<0<<endl;
        }
    }

    return 0;
}

