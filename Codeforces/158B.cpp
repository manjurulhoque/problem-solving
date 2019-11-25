#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    int a[t], one = 0, two = 0, three = 0, four = 0, count = 0;

    for(int i = 0; i < t; i++)
    {
        cin>>a[i];
        if(a[i] == 4)
            count++;
        else if(a[i] == 3)
            three++;
        else if(a[i] == 2)
            two++;
        else if(a[i] == 1)
            one++;
    }

    if(three == one)
    {
        count += three;
        three = one = 0;
    }
    else if(three > one)
    {
        count += (three - one);
        if(one == 0)
        {
            three = 0;
        }
        else
        {
            three -= one;
            one = 0;
            count += three;
        }
    }
    else if(three > 0)
    {
        count += (one - three);
        one -= three;
        three = 0;
    }


    if(two % 2 == 0)
    {
        count += (two / 2);
        two = 0;
    }
    else if(two == one)
    {
        count += two;
        two = 0;
        one = 0;
    }
    else if(two > one)
    {
        count += (two - one);
        if(one == 0)
        {
            two = 0;
        }
        else
        {
            two -= one;
            one = 0;
            count += two;
        }
    }
    else if(two > 0)
    {
        count += (one - two);
        one -= two;
        two = 0;
    }

    if(one % 4 == 0)
    {
        count += (one / 4);
    }
    else
    {
        count += (one / 4);
        one = (one % 4);
        if(one == 2) {
            count += (one / 2);
            one = 0;
        }
        else {
            count += one;
        }
    }

    cout<<count<<endl;
}


