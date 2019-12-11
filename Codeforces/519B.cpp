#include<bits/stdc++.h>
using namespace std;

/// Accepted

int main()
{
    int t, prev_sum = 0, sum = 0, c = 0;
    cin>>t;
    int iteration = t - 2;

    while(t-- >= iteration)
    {
        for(int i = 1; i <= t+1; i++)
        {
            int tmp;
            cin>>tmp;
            sum += tmp;
        }
        if(c == 0)
        {
            prev_sum = sum;
        }
        else
        {
            cout<<(prev_sum - sum)<<endl;
            prev_sum = sum;
        }
        c++;
        sum = 0;
    }

    return 0;
}

