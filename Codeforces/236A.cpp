#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    set<char> distinct(begin(s), end(s));

    if(distinct.size() % 2 == 0) puts("CHAT WITH HER!");
    else puts("IGNORE HIM!");

    return 0;
}

