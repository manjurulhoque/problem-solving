#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long s, n;
    cin>>s>>n;

    bool can_win = true;
    long long a[n], b[n];

    for(long long i = 0; i < n; i++)
    {
        cin>>a[i]>>b[i];
    }
    int t1, t2;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                t1=a[i];
                a[i]=a[j];
                a[j]=t1;
                t2=b[i];
                b[i]=b[j];
                b[j]=t2;
            }
        }
    }
    int cnt = 0;
    for(long long i = 0; i < n; i++)
    {
        if(a[i] < s)
        {
            s += b[i];
            cnt++;
        }
    }

    if(cnt == n)
        puts("YES");
    else
        puts("NO");

    return 0;
}

