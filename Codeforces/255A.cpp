#include<bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(false),cin.tie(NULL)
#define ll long long

int main()
{
    IOS;

    int a;
    ll b = 0, g = 0, s = 0;
    cin >> a;

    int x[a+1];

    for ( int i = 1 ; i <= a ; i++ )
    {
        cin >> x[i];
        if ( i % 3 == 1 )
        {
            g += x[i];
        }
        else if ( i % 3 == 2 )
        {
            b += x[i];
        }
        else if ( i % 3 == 0 )
        {
            s += x[i];
        }
    }

    if ( g > b && g > s )
    {
        cout << "chest";
    }
    else if ( b > g && b > s )
    {
        cout << "biceps";
    }
    else if ( s > b && s > g )
    {
        cout << "back";
    }

    return 0;
}

