#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;

    while(tc--)
    {
        long int n;
        cin>>n;
        long int arr[1013];
        memset(arr, -1, sizeof(arr));
        for(int i = 1; i <= n; i++)
        {
            int p, s;
            cin>>p>>s;
            if(p <= 8)
            {
                if(arr[p] < s)
                {
                    arr[p] = s;
                }
            }
        }
        long int s = 0;
        for(int i = 1; i <= 8; i++)
        {
            if(arr[i] != -1)
            {
                s += arr[i];
            }
        }

        cout<<s<<endl;
    }

    return 0;
}

