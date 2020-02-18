#include<bits/stdc++.h>
using namespace std;

/// Accepted

int main()
{
    int t, a, b;
    cin>>t;

    vector< pair <int,int> > vect;

    int cost = 0, minimum = 100;

    for (int i = 0; i < t; i++)
    {
        cin>>a>>b;
        minimum = min(minimum, b);
        cost += minimum * a;
    }

//    for (int i = 0; i < t - 1; i++)
//    {
//        if(i != t - 1 && i + 1 < t - 1 && vect[i].second < vect[i + 1].second)
//        {
//            cost += (vect[i].first + vect[i + 1].first) * vect[i].second;
//            i++;
//        }
//        else
//        {
//            cost += vect[i].first * vect[i].second;
//        }
//        cout<<i<<endl;
//    }

    cout<<cost<<endl;

    return 0;
}

