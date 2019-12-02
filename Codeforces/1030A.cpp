#include<bits/stdc++.h>
using namespace std;

/// Accepted

int main()
{
    int tc, hard = 0;
    cin>>tc;

    while(tc--) {
        int tmp;
        cin>>tmp;
        if(tmp == 1) hard++;
    }

    if(hard > 0) cout<<"HARD"<<endl;
    else cout<<"EASY"<<endl;

    return 0;
}
