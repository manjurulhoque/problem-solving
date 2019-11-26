#include<bits/stdc++.h>
using namespace std;

/// Accepted

int main()
{
    int n;
    cin>>n;

    int result = 0;

    result += n / 5;
    n %= 5;
    result += n / 4;
    n %= 4;
    result += n / 3;
    n %= 3;
    result += n / 2;
    n %= 2;
    result += n / 1;

    cout<<result<<endl;

    return 0;
}

