#include<bits/stdc++.h>
using namespace std;

/// Accepted

int main()
{
    int n;
    cin>>n;
    int x[n+1];
    for(int i = 1; i <= n; i++) x[i] = 0;

    int p, tmp;
    cin>>p;

    for(int i = 0; i < p; i++){ cin>>tmp; x[tmp] = 1;}

    int q;
    cin>>q;

    for(int i = 0; i < q; i++){ cin>>tmp; x[tmp] = 1;}

    for(int i = 1; i <= n; i++) {
        if(x[i] == 0) {
            puts("Oh, my keyboard!");
            return 0;
        }
    }

    puts("I become the guy.");


    return 0;
}
