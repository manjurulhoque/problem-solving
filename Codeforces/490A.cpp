#include<bits/stdc++.h>
using namespace std;

/// Accepted

int main()
{
    int n;
    cin>>n;
    bool students[n + 1] = {false};
    vector<int> computer, math, physics;

    for(int i = 1; i <= n; i++)
    {
        int tmp;
        cin>>tmp;
        // students[i] = tmp;

        if(tmp == 1)
            computer.push_back(i);
        else if(tmp == 2)
            math.push_back(i);
        else
            physics.push_back(i);
    }

    int minimum = min({computer.size(), math.size(), physics.size()});

    if(minimum == 0)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<minimum<<endl;
        for(int i = 0 ; i < minimum; i++)
        {
            cout << computer[ i ] << ' ' << physics [ i ] << ' '<<math [ i ] << endl;
        }
    }

    return 0;
}

