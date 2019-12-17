#include<bits/stdc++.h>
using namespace std;

/// Accepted

int main()
{
    int a, b, sum = 0, c;
    scanf("%d %d",&a, &b);
    sum = a;
    while(true)
    {
        c = a / b;
        a = c + (a % b);
        sum += c;
        if(a < b)
            break;
    }

    printf("%d\n", sum);
    return 0;
}
