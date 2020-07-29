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
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y');
}

int main()
{
    fast_in_out;

    int n;
    cin>>n;
    string s;
    cin>>s;
    //bool e = false;

    for(int i = 1; i < s.size(); i++)
    {
        if(is_vowel(s[i]) && is_vowel(s[i - 1])) {
            s.erase(i, 1);
            i--;
        }
    }

    cout<<s<<endl;

    return 0;
}
