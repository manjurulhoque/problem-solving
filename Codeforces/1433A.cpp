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

    vector<string> initial;

    initial.push_back("1");initial.push_back("11");initial.push_back("111");initial.push_back("1111");
    initial.push_back("2");initial.push_back("22");initial.push_back("222");initial.push_back("2222");
    initial.push_back("3");initial.push_back("33");initial.push_back("333");initial.push_back("3333");
    initial.push_back("4");initial.push_back("44");initial.push_back("444");initial.push_back("4444");
    initial.push_back("5");initial.push_back("55");initial.push_back("555");initial.push_back("5555");
    initial.push_back("6");initial.push_back("66");initial.push_back("666");initial.push_back("6666");
    initial.push_back("7");initial.push_back("77");initial.push_back("777");initial.push_back("7777");
    initial.push_back("8");initial.push_back("88");initial.push_back("888");initial.push_back("8888");
    initial.push_back("9");initial.push_back("99");initial.push_back("999");initial.push_back("9999");

    int t;
    cin>>t;
    int l = initial.size();
    while(t--)
    {
        string s; cin>>s;
        int n = 0;
        for(int i = 0; i < l; i++) {
            if(initial[i] != s) n += initial[i].size();
            else {n += initial[i].size(); break;}
        }

        cout<<n<<endl;
    }

    return 0;
}

