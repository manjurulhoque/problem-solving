#include<bits/stdc++.h>
using namespace std;

/// Accepted

void findNums(int n)
{
    if (n <= 11)
    {
        if (n == 8)
            cout << "4 4";
        if (n == 10)
            cout << "4 6";
        else
            cout << "-1";
        return;
    }

    if (n % 2 == 0)
        cout << "4 " << (n - 4);
    else
        cout << "9 " << (n - 9);
}

int main()
{
    long int n;
    cin>>n;

    findNums(n);

    return 0;
}
