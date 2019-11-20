#include<bits/stdc++.h>
using namespace std;

/// solved

int main()
{
    int m, n, res;
    cin>>m>>n;


    if(m == 1)
    {
        res = n / 2; /// if m is 1 then we can take n / 2
    }
    else
    {
        /// if n is 1 then first we can take n
        res = n;

        if(m - 2 > 1) /// checking m - 2 > 1 or not
        {
            /// yes then we will subtract 2 from m while m - 2 > 1
            while((m - 2) > 1)
            {
                res += n;
                m -= 2;
            }
            m -= 2; /// if m is 3 remains then subtract
            if(m == 1) res += n / 2; /// same as first step
        }
        else if(m - 2 == 1) { /// m - 2 = 1 then only sum of n / 2
            res += n / 2;
        }
    }

    cout<<res<<endl;

    return 0;
}
