#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, a, b, c = 0;
    cin>>t;
    string msg = "Poor Alex";

    while(t--)
    {
        cin>>a>>b;

        if(a < b) {
            msg = "Happy Alex";
        }
    }

    cout<<msg<<endl;

    return 0;
}

