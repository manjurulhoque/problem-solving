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
        int N;
        ull K;
        cin>>N>>K;
        ull arr[N],i;
        long int j = -1;
        for(i = 0; i < N; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr + N);
        for(i = 0; i < N; i++)
        {
            if(arr[i] < K && K % arr[i] == 0)
            {
                j = arr[i];
            }
        }
        cout<<j<<endl;
    }

    return 0;
}
