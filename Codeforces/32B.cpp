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

    string str, str1;
    cin>>str;

    int l = str.size();
    for(int i = 0; i < l; i++)
    {
        if(str[i] == '.')
        {
            str1 += '0';
        }
        else if(str[i] == '-' && str[i + 1] == '.')
        {
            str1 += '1';
            i++;
        }
        else if(str[i] == '-' && str[i + 1] == '-')
        {
            str1 += '2';
            i++;
        }
    }

    cout<<str1<<endl;

    return 0;
}
