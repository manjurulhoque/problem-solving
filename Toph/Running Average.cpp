#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum = 0, tmp;
    cin>>n;

    for(int i = 1; i <= n; i++)
    {
        cin>>tmp;
        sum += tmp;
        cout<<((double)sum/(double)i)<<endl;
    }

    return 0;
}
