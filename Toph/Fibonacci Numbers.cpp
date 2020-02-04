#include<bits/stdc++.h>
using namespace std;

#define __FastIO   ios_base::sync_with_stdio(false); cin.tie(0);

int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n-1) + fib(n-2);
}

int main()
{
    __FastIO;

    int n;
    cin>>n;

    cout<<fib(n)<<endl;

    return 0;
}
