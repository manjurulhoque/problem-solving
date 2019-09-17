#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int a[4];
    float b[2];

    cin>>a[0]>>a[1]>>b[0];
    cin>>a[2]>>a[3]>>b[1];

    cout<<std::setprecision(2)<<std::fixed<<"VALOR A PAGAR: R$ "<<((a[1] * b[0]) + (a[3] * b[1]))<<endl;

    return 0;
}


