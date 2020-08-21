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

bool is_vowel(char c)
{
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main()
{

    fast_in_out;

    string str;
    cin>>str;

    bool flag = false;

    int l = str.size();

    for(int i = 0; i < l; i++)
    {
        if(str[i] == 'n') {
            continue;
        }
        if(!is_vowel(str[i]) && is_vowel(str[i + 1]))
        {
            i += 1;
            flag = true;
        }
        else {
            flag = false;
        }
    }

    cout<<(flag ? "YES" : "NO")<<endl;

    return 0;
}
