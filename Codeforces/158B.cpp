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
        if(a[i] == 4) count++;
        else if(a[i] == 3) three++;
        else if(a[i] == 2) two++;
        else if(a[i] == 1) one++;
    }

    if(three == one){
        count += three;
        three = one = 0;
    }
    else {
        count += (three - one);
        three -= one;
        one = 0;
        count += three;
    }

    if(two % 2 == 0) count += (two / 2);
    else if(two == one) {
        count += two;
    } else {

    }

    cout<<count<<endl;
}


