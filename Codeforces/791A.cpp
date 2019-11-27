#include<bits/stdc++.h>
using namespace std;

/// Accepted

int main()
{
    int a, b, year = 0;
    cin>>a>>b;

    while(true) {
        a *= 3;
        b *= 2;
        year++;
        if(a > b) break;
    }

    cout<<year<<endl;

    return 0;
}

