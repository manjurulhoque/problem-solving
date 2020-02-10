#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// function to count the divisors
int countDivisors(int n)
{
    int cnt = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            // If divisors are equal,
            // count only one
            if (n / i == i)
                cnt++;

            else // Otherwise count both
                cnt = cnt + 2;

            cout<<i<<endl;
        }
    }
    return cnt;
}

int main()
{
    ll n;
    cin>>n;

    countDivisors(n);

    return 0;
}

