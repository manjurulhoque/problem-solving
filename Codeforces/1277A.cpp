#include<bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

// Function to find the number of integers
// from 1 to n which contains 0's and 1's only
int countNumbers(int x, int n)
{
    // otherwise add count this number and
    // call two functions
    if(n > 9) {
        return 9 + countNumbers(x * 10 + 1, n) + countNumbers(x * 10 + 2, n) + countNumbers(x * 10 + 3, n) + countNumbers(x * 10 + 4, n) + countNumbers(x * 10 + 5, n) + countNumbers(x * 10 + 6, n) + countNumbers(x * 10 + 7, n) + countNumbers(x * 10 + 8, n) + countNumbers(x * 10 + 9, n);
    } else {
        return 1 + countNumbers(x * 10, n) + countNumbers(x * 10 + 1, n);
    }
}

int main()
{
    int t;
    cin>>t;

    while(t--) {
        int n, m;
        cin>>n;
        m = countNumbers(1, n);
        cout<<m<<endl;
    }

    return 0;
}

