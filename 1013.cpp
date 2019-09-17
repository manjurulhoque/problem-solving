#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int n1, n2, n3;

    cin>>n1>>n2>>n3;

    if((n1 >= n2) && (n1 >= n3))
        cout <<n1<<" eh o maior" << endl;
    else if ((n2 >= n1) && (n2 >= n3))
        cout <<n2<<" eh o maior" << endl;
    else
        cout <<n3<<" eh o maior" << endl;

    return 0;
}

