#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll factorial(ll n)
{
    if(n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}

int main()
{
    ll n;
    cin>>n;

    ll k = factorial(n);

    stringstream ss;
    ss<<k;
    string s;
    ss>>s;

    if(s.size() <= 4) cout<<s<<endl;
    else cout<<s.substr(s.length() - 4)<<endl;

    return 0;
}

