#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;

    long long arr[n];

    bool present = false;
    int t, k = 0;

    for(int i = 0; i < n; i++) cin>>arr[i];

    for(int i = 0; i < n; i++)
    {
        k = 0;
        for(int j = 0; j < n; j++)
        {
            if(arr[j] % arr[i] == 0) {
                k++;
                t = arr[i];
            }
        }

        if(k == n)
        {
            cout<<t<<endl;
            return 0;
        }
    }

    cout<<-1<<endl;

    return 0;
}
