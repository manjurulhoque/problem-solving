#include<bits/stdc++.h>
using namespace std;

/// Accepted

int main()
{
    int arr[3];
    cin>>arr[0]>>arr[1]>>arr[2];

    sort(arr, arr + 3);

    int sum = (arr[1] - arr[0]) + (arr[2] - arr[1]);

    cout<<sum<<endl;

    return 0;
}

