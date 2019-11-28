#include<bits/stdc++.h>
using namespace std;

/// Accepted

int main()
{
    int tc, tmp = 0, c = 0;
    cin>>tc;

    int arr[tc];

    while(tc--) {
        int n;
        cin>>n;
        arr[tc] = n;
        if(n > tmp) {
            tmp = n;
        }
    }

    int l = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < l; i++) {
        c += tmp - arr[i];
    }

    cout<<c<<endl;

    return 0;
}


