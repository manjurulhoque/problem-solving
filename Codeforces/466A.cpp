#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a, b, sum = 0;
    cin>>n>>m>>a>>b;

    sum = b * (n / m);
    n %= m;

    sum += a * n;
    cout<<sum<<endl;

    return 0;
}

