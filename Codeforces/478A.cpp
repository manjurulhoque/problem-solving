#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    int s=a + b + c + d + e;
    cout<<(s % 5 || s == 0 ? -1 : s/5);

    return 0;
}

