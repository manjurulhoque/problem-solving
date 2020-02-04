#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        int arr[n], sum = 0, odd = 0, even = 0;

        for(int i = 0; i < n; i++)
        {
            cin>>arr[i];
            if(arr[i] % 2 != 0) odd++;
            else even++;
            //sum += arr[i];
        }

        if(odd % 2 != 0) puts("YES");
        else puts("NO");
    }

    return 0;
}
