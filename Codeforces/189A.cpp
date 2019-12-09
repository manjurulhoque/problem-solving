#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, arr[3];
//    cout<<5-2<<endl;
    cin>>n>>arr[0]>>arr[1]>>arr[2];

    sort(arr, arr + sizeof(arr)/sizeof(arr[0]));

    int c = 0;
    while(n > 0)
    {
        if(n >= arr[0])
        {
            c += n / arr[0];
            n %= arr[0];
        }
        if(n >= arr[1])
        {
            c += n / arr[1];
            n %= arr[1];
        }
        if(n >= arr[2])
        {
            c += n / arr[2];
            n %= arr[2];
        }

        cout<<n<<endl;
    }

    cout<<c<<endl;


    return 0;
}
