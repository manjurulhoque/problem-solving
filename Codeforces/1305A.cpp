#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        int a[n], b[n];
        for(int i = 0; i < n; i++)
            cin>>a[i];
        for(int i = 0; i < n; i++)
            cin>>b[i];

        bool same = false;
        while(same == false)
        {
            int s = a[0] + b[0];
            int i = 0;
            for(int j = 0; j < n; j++)
            {
                if(a[j] + b[j] != s)
                {
                    s = a[j] + b[j];
                    same = false;
                }
                else
                {
                    same = true;
                }
            }

            swap(b[i], b[i + 1]);
            i++;
        }

        for(int i = 0; i < n; i++)
            cout<<a[i];
        for(int i = 0; i < n; i++)
            cout<<b[i];
    }

    return 0;
}
