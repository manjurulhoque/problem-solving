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
        char c;
        cin>>c;
        if(c == 'B' or c == 'b') cout<<"BattleShip"<<endl;
        else if(c == 'C' or c == 'c') cout<<"Cruiser"<<endl;
        else if(c == 'D' or c == 'd') cout<<"Destroyer"<<endl;
        else if(c == 'F' or c == 'f') cout<<"Frigate"<<endl;
    }

    return 0;
}