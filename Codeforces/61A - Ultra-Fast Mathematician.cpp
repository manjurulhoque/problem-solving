#include<bits/stdc++.h>
using namespace std;

/// Accepted

int main()
{
    string s, s1;
    cin>>s;
    cin>>s1;
    string result = s;

    int l = s.size();

    for(int i = 0; i < l; i++) {
        if(s[i] == s1[i]) result[i] = '0';
        else result[i] = '1';
    }

    cout<<result<<endl;

    return 0;
}
