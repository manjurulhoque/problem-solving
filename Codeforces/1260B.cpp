#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;

    while(tc--) {
        long int a, b;
        cin>>a>>b;

        long int x = 1;
        while(true) {
            a = a - x;
            b = b - 2 * x;
            if(a == 0 && b == 0) {
                puts("YES");
                break;
            }
            x++;
        }
    }

    return 0;
}
