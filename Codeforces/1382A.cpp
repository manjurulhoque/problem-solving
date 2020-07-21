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
        int n,m;
        cin>>n>>m;
        int a[n+2],b,c[2000]={0};
        int r,f=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(c[a[i]]==0)
                c[a[i]]=1;
        }
        for(int j=0;j<m;j++)
        {
            cin>>b;
            if(c[b]==1)
            {
                f=1;
                r=b;
            }
        }
        if(f==1)
            cout<<"YES\n1"<<" "<<r<<endl;
        else
            cout<<"NO\n";
    }

    return 0;
}
