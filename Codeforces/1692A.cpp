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

    int t, c = 0;
    cin>>t;
    while(t--)
    {
        int n;
        vector<int> arr;
        for(int i = 0; i < 4; i++) {
            cin>>n;
            arr.push_back(n);
        }
        if(arr[1] > arr[0]) c++;
        if(arr[2] > arr[0]) c++;
        if(arr[3] > arr[0]) c++;
        cout<<c<<endl;
        c = 0;
    }

    return 0;
}
