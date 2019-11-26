#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, x = 0, y = 0, z = 0;
    cin>>t;

    while(t--) {
        int xtemp, ytemp, ztemp;
        cin>>xtemp>>ytemp>>ztemp;
        x += xtemp;
        y += ytemp;
        z += ztemp;
    }

    if(x == 0 && y == 0 && z == 0) puts("YES");
    else puts("NO");

    return 0;
}
