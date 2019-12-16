#include<bits/stdc++.h>
using namespace std;

/// Accepted

int main()
{
    int n, m;
    cin>>n>>m;
    map<string, string> words;

    while(m--) {
        string s, s1;
        cin>>s>>s1;
        words.insert(pair<string, string>(s, (s.size() <= s1.size()) ? s : s1));
    }

    while(n--) {
        string ss;
        cin>>ss;
        cout<<words.at(ss)<<" ";
    }
    cout<<endl;


    return 0;
}
