#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cout<<4%5;
    cin>>t;

    int buttons[6] = {-5, -2, -1, 1, 2, 5};

    while(t--) {
        int x, y;
        cin>>x>>y;
        if(x == y) {
            puts(0);
        }

        int sub = y - x;
        cout<<sub / 2<<endl;
    }

    return 0;
}
