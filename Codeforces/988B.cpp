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

bool compareLen(const std::string& a, const std::string& b)
{
    return (a.size() < b.size());
}

int main()
{

    fast_in_out;

    int n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; ++i)
        cin >> s[i];

    sort(s.begin(), s.end(), [&] (const string &s, const string &t)
    {
        return s.size() < t.size();
    });

    for (int i = 0; i < n - 1; ++i)
    {
        if (s[i + 1].find(s[i]) == string::npos)
        {
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";
    for (auto it : s)
        cout << it << endl;

    return 0;
}
