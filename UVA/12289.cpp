#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--) {
        string s;
        cin>>s;
        if((s[0] == 'o' && s[1] == 'e') && s.size() == 3) {
            cout<<1<<endl;
        }
        else if((s[0] == 't' || s[1] == 'w' || s[2] == 'o') && s.size() == 3) {
            cout<<2<<endl;
        }
        else {
            cout<<3<<endl;
        }
    }

    return 0;
}
