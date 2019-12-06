#include<bits/stdc++.h>
using namespace std;

/// Accepted

int main()
{
    int n, t;
    cin>>n>>t;
    string str;
    cin>>str;

    for(int i = 1; i <= t; i++) {
        for(int j = 0; j < n; j++) {
            if(str[j] == 'B') {
                if(str[j + 1] == 'G') {
                    str[j + 1] = 'B';
                    str[j] = 'G';
                    j++;
                }
            }
        }
    }

    cout<<str<<endl;

    return 0;
}


