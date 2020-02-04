#include<bits/stdc++.h>
using namespace std;

#define __FastIO   ios_base::sync_with_stdio(false); cin.tie(0);

int main()
{
    __FastIO;

    int n;
    cin>>n;

    if(n % 4 == 0 && n % 400 != 0) puts("Yes");
    else puts("No");

    return 0;
}
