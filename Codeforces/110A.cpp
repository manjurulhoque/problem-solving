#include<bits/stdc++.h>
using namespace std;

/// Accepted

int main()
{
    string s;
    cin>>s;

    int total = count(s.begin(), s.end(), '4') + count(s.begin(), s.end(), '7');

    if(total == 4 || total == 7) puts("YES");
    else puts("NO");

    return 0;
}

