#include<bits/stdc++.h>
using namespace std;

/// Accepted

int main()
{
    int n, h, c = 0;
    cin>>n>>h;

    while(n--) {
        int tmp;
        cin>>tmp;
        if(tmp > h) c += 2;
        else c += 1;
    }

    cout<<c<<endl;

    return 0;
}


