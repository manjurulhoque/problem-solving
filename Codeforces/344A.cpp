#include<bits/stdc++.h>
using namespace std;

/// Accepted

int main()
{
    int tc, c = 1;
    cin>>tc;
    string current_str, previous_str;

    for(int i = 1; i <= tc; i++) {
        cin>>current_str;
        if(i == 1) {
            previous_str = current_str;
        }
        else if(current_str[0] - '0' != previous_str[0] - '0' && current_str[1] - '0' != previous_str[0] - '1'){
            c++;
            previous_str = current_str;
//            cout<<current_str<<" "<<previous_str<<" "<<c<<endl;
        }
    }

    cout<<c<<endl;

    return 0;
}

