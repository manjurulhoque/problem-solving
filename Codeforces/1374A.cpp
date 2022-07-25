#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int t;

    cin>>t;

    while(t--)
    {
        long int x, y, n;
        cin>>x>>y>>n;

        long int ans = 0;

        while(n > 0)
        {
            if(n % x == y) {
                ans = n;
                break;
            }
            n--;
        }

        cout<<ans<<endl;
    }


    return 0;
}
