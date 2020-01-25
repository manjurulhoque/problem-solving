#include<bits/stdc++.h>
using namespace std;

/// Accepted

int main()
{
    int t, arr[13], c = 0;
    cin>>t;

    for(int i = 0; i < 12; i++)
    {
        cin>>arr[i];
    }

    if(t == 0)
    {
        cout<<0<<endl;
    }
    else
    {
        sort(arr, arr+12, greater<int>());
        int s = 0;
        for(int i = 0; i < 12; i++)
        {
            if(s < t)
            {
                s += arr[i];
                c++;
            }
            if(s >= t) break;
            //cout<<arr[i]<<endl;
        }

        if(s >= t)
        {

            if(c == 0) puts("0");
            else cout<<c<<endl;
        }
        else
        {
            puts("-1");
        }
    }

    return 0;
}


