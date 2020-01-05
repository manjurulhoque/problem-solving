#include<bits/stdc++.h>
using namespace std;

/// Accepted

int main()
{
    long n, minimum = 0;
    cin>>n;

    while(n > 0) {
        if(n / 100 > 0) {
            minimum += n / 100;
            n %= 100;
        }
        if(n / 20 > 0) {
            minimum += n / 20;
            n %= 20;
        }
        if(n / 10 > 0) {
            minimum += n / 10;
            n %= 10;
        }
        if(n / 5 > 0) {
            minimum += n / 5;
            n %= 5;
        }
        if(n / 1 > 0) {
            minimum += n / 1;
            n %= 1;
        }
    }

    cout<<minimum<<endl;

    return 0;
}

