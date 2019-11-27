#include<bits/stdc++.h>
using namespace std;

/// Accepted

int main()
{
    int n, a = 0, d = 0;
    cin>>n;

    for(int i = 1; i <= n; i++) {
        char c;
        cin>>c;
        if(c == 'A') a++;
        else d++;
    }

    if(a > d) puts("Anton");
    else if(d > a) puts("Danik");
    else puts("Friendship");

    return 0;
}


