#include<bits/stdc++.h>
using namespace std;

/// Accepted

int main()
{
    int n, k, c = 0;
    cin>>n>>k;

    int remains = 240 - k, sum = 0;

    for(int i = 1; i <= n; i++) {
        sum += 5 * i;
        if(sum <= remains) c++;
    }

    cout<<c<<endl;

    return 0;
}
