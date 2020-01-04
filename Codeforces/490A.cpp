#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, one = 0, two = 0, three = 0;
    cin>>n;
    int students[n + 1];

    for(int i = 1; i <= n; i++)
    {
        int tmp;
        cin>>tmp;
        students[i] = tmp;

        if(tmp == 1)
            one++;
        else if(tmp == 2)
            two++;
        else
            three++;
    }

    while(one >= 1 && two >= 1 && three >= 1) {

    }

    return 0;
}

