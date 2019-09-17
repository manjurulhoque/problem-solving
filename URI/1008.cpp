#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double a, b, c;

    cin>>a;
    cin>>b;
    cin>>c;

    cout<<"NUMBER = "<<a<<endl;
    cout<<std::setprecision(2)<<std::fixed<<"SALARY = U$ "<<(b * c)<<endl;

    return 0;
}

