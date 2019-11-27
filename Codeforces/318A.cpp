#include<bits/stdc++.h>
using namespace std;

/// Accepted

int main()
{
    long long int n, k;
    cin>>n>>k;

    long long int arr[n + 1], j = 1;

    for(long long int i = 1; i <= n; i++) {
        if(i % 2 != 0) arr[j++] = i;
    }

    for(long long int i = 1; i <= n; i++) {
        if(i % 2 == 0) arr[j++] = i;
    }

    cout<<arr[k]<<endl;


    return 0;
}


