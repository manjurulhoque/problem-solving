#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int n;
    cin>>n;

    ll arr[n], sum = 0;

    for(int i = 0; i < n; i++) cin>>arr[i];

    sort(arr, arr + n, greater<int>());

    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }

    cout<<sum<<endl;

    return 0;
}
