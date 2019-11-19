#include<bits/stdc++.h>
using namespace std;

/// Solved

int main()
{
    int x, y;
    cin>>x>>y;
    int a[x], count = 0;

    for(int i = 0; i < x; i++) {
        cin>>a[i];
    }

    for(int i = 0; i < x; i++) {
        if(a[i] <= 0) continue;
        else if(a[i] >= a[y-1]) count++;
    }

    cout<<count<<endl;
}

