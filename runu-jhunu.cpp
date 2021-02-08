#include <iostream>
#include<math.h>
using namespace std;

int is_prime(int n)
{
    int i, flag;
    for (i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
    }

    if(n<=1)
        flag=0;
    else if(n==2)
        flag=1;

    return flag;
}

int main()
{
    int piaju, shingara, pizza, burger, n, m, t;

    scanf("%d", &t);

    while(t)
    {
        scanf("%d", &n);

        if(n < 100 && n%2 == 0)
        {
            cout << "Piyaju\n";
        }
        else if( n < 100 && n%2!= 0)
        {
            cout << "Shingara\n";
        }
        else if (n > 100 && is_prime(n))
        {
            cout << "Pizza\n";
        }
        else if (n > 100 && !is_prime(n))
        {
            cout << "Burger\n";
        }
        t--;
    }

    return 0;
}
