#include<bits/stdc++.h>
using namespace std;

/// Accepted

int main()
{
    int t;
    long long range[10000001];
    int pile = 1;
    int index = 1;
    int worms;
    int p;
    cin>>p; //the no of piles
    while (p--)
    {
        cin>>worms;
        for (int i = 0; i < worms; i++)
        {
            range[index] = pile;
            index++;
        }
        pile++;
    }

    int x;
    cin>>x; //the no of juicy piles
    while (x--)
    {
        int y;
        cin>>y;
        cout<<range[y]<<endl;
    }

    return 0;
}

