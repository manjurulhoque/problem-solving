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

    int t,n,i,j,temp,x,m, a[200];
    cin>>t;

    while(t--)
    {
        cin>>n;
        a[0]=1;
        m=1;
        for(i=1; i<=n; i++)
        {
            for(j=0; j<m; j++)
            {
                x=a[j]*i+temp;
                a[j]=x%10;
                temp=x/10;
            }
            while(temp!=0)
            {
                a[m]=temp%10;
                temp/=10;
                m++;
            }
        }
        for(i=m-1; i>=0; i--)
        {
            cout<<a[i];
        }
        cout<<"\n";
    }

    return 0;
}
