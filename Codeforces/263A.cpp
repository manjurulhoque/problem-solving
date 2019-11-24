#include<bits/stdc++.h>
using namespace std;

/// Accepted

int main()
{
    int a[5][5], x, y;

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            cin>>a[i][j];
            if(a[i][j] == 1) {
                x = i;
                y = j;
            }
        }
    }
    int result = abs(2 - x) + abs(2 - y);
    cout<<result<<endl;

    return 0;
}
