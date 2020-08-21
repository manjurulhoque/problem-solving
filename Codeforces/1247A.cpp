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

    int da,db;
    cin>>da>>db;
    if(da>db)
    {
        if(da==9 && db==1)
            cout<<99<<" "<<100;
        else
            cout<<-1;
    }
    else if(db-da>1)
        cout<<-1;
    else if(da==db)
        cout<<da*10+1<<" "<<db*10+2;
    else
        cout<<da*10+9<<" "<<db*10;

    return 0;
}
