#include<bits/stdc++.h>
using namespace std;

/// Accepted

int main()
{
    long a, b, c, d;
    cin>>a>>b>>c>>d;

    set<long> set1;

    set1.insert(a);
    set1.insert(b);
    set1.insert(c);
    set1.insert(d);

    cout<<4 - set1.size()<<endl;

    return 0;
}

