#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    while(n > 5)
    {
        n /= 2;
        n -= 2;
    }

    switch(n)
    {
        case 1:
            cout<<"Sheldon"<<endl;
            break;
        case 2:
            cout<<"Leonard"<<endl;
            break;
        case 3:
            cout<<"Penny"<<endl;
            break;
        case 4:
            cout<<"Rajesh"<<endl;
            break;
        case 5:
            cout<<"Howard"<<endl;
            break;
    }


    return 0;
}

