#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin>>a;

    for(int i = 1; i <= a / 2; i++)
    {
        if(a % i == 0) cout<<i<<endl;
    }

    cout<<a<<endl;

    return 0;
}
