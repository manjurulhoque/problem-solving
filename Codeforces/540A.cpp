#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n, s = 0, i;
    string a, b;

    cin>> n;
    cin>> a;
    cin>> b;
    for (i = 0; i < n; i++)
    {
        s += min((a[i] -b[i] + 10) % 10, (b[i] - a[i] + 10) % 10);
    }
    cout << s << endl;

    return 0;
}
