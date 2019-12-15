#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, e, f, sum = 0;
    cin>>a>>b>>c>>d>>e>>f;

    if(f > e)
    {
        int second = min({b, c, d});
        sum += (second * f);
        d -= second;

        if(d > 0)
        {
            int first = min(a, d);
            sum += (first * e);
        }

        cout<<sum<<endl;
    }
    else
    {
        int first = min(a, d);
        sum += (first * e);
        d -= first;

        if(d > 0)
        {
            int second = min({b, c, d});
            sum += (second * f);
        }

        cout<<sum<<endl;
    }


    return 0;
}

