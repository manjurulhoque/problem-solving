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

        if(n % 2 != 0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            int m = n / 2;
            if(m % 2 == 0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }

    return 0;
}

