#include<bits/stdc++.h>
using namespace std;

/// Accepted

int main()
{
    int t;
    cin>>t;
    int arr[t], c = 0;

    int maxx;
    int minn;
    for(int i = 0; i < t; i++)
    {
        cin>>arr[i];
        if(i == 0)
        {
            maxx = arr[0];
            minn = arr[0];
        }
        if(arr[i] > maxx)
        {
            maxx = arr[i];
            c++;
        }
        if(arr[i] < minn)
        {
            minn = arr[i];
            c++;
        }
    }

    cout<<c<<endl;

    return 0;
}
