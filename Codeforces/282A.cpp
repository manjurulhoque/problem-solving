#include<bits/stdc++.h>
using namespace std;

/// Solved

int main()
{
    int t;
    cin>>t;

    int x = 0;
    while(t--) {
        string s;
        cin>>s;

        if(s[0] == 'X') {
            if(s[1] == '+') {
                x++;
            }
            if(s[1] == '-') {
                x--;
            }
        }
        else if(s[0] == '+') {
            ++x;
        }
        else if(s[0] == '-') {
            --x;
        }
    }

    cout<<x<<endl;

    return 0;
}
