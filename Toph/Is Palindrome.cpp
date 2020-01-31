#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s, ss;
    cin>>s;
    ss = s;
    reverse(ss.begin(), ss.end());

    if(s == ss) puts("Yes");
    else puts("No");

    return 0;
}
