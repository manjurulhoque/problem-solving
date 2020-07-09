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

        while(n)
        {
            int m = n % 10;
            cout<<m<<endl;
            n /= 10;
        }
    }

    return 0;
}

