#include<bits/stdc++.h>
using namespace std;

/// Accepted

int main()
{
    int n, one = 0, zero = 0;
    cin>>n;
    char ss[n + 1];

    for(long i = 0; i < n; i++) {
        cin>>ss[i];
        if(ss[i] == '1') one++;
        if(ss[i] == '0') zero++;
    }

    cout<<abs((one - zero))<<endl;


    return 0;
}

