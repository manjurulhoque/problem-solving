#include<bits/stdc++.h>
using namespace std;

/// Solved

int main()
{
    int t;
    cin>>t;

    int friends[t][3], n= 0, count = 0;

    for(int i = 0; i < t; i++)
    {
        n= 0;
        for(int j = 0; j < 3; j++)
        {
            cin>>friends[i][j];
            if(friends[i][j] == 1)
            {
                n++;
            }
        }
        if(n >= 2)
            count++;
    }

    cout<<count<<endl;

    return 0;
}
