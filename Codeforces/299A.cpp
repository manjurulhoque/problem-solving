#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;

    long long arr[n];

    int ans = -1, c = 0;

    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }

    sort(arr, arr + n);

    for(int i = 0; i < n; i++) {
        if(arr[i] % arr[0] == 0) c++;
    }

    if(c == n) ans = arr[0];

    cout<<ans<<endl;

    return 0;
}
