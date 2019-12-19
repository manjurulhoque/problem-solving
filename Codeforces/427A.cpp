#include<bits/stdc++.h>
using namespace std;

/// Accepted

int main()
{
    long n, sum = 0, prev = 0, total_police = 0;
    cin>>n;

    for(long i = 1; i <= n; i++)
    {
        int c;
        cin>>c;

        if(c >= 1) total_police += c;
        if(c == -1) {
            if(total_police > 0) total_police -= 1;
            else sum += 1;
        }
    }

    cout<<sum<<endl;

    return 0;
}

