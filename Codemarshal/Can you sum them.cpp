#include<bits/stdc++.h>
using namespace std;

/***
status: Accepted
***/

int main()
{
    int n;

    cin>>n;
    int arr[n];
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if(i % 2 == 0) sum += arr[i];
    }

    cout<<sum<<endl;

    return 0;
}
