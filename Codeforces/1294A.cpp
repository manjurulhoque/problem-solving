#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int arr[3], n, s, maxt;
    cin>>t;

    for(int i = 1; i <= t; i++)
    {
        cin>>arr[0]>>arr[1]>>arr[2]>>n;
        maxt = max(arr[0], max(arr[1], arr[2]));
        s = arr[0]+ arr[1]+ arr[2]+ n;
        if(s%3==0 && s/3 >= maxt) cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}

