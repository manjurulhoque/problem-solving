#include<bits/stdc++.h>
using namespace std;

/// Accepted

int main()
{
    int two, three, five, six, sum = 0;
    cin>>two>>three>>five>>six;

    while(two >= 1)
    {
        if(five >= 1 && six >= 1)
        {
            sum += 256;
            two--;
            five--;
            six--;
        }
        else if(three >= 1 && two >= 1)
        {
            sum += 32;
            two--;
            three--;
        }
        else
        {
            two--;
        }
    }

    cout<<sum<<endl;

    return 0;
}

