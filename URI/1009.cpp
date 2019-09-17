#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    string name;
    double a, b;

    cin>>name;
    cin>>a;
    cin>>b;

    cout<<std::setprecision(2)<<std::fixed<<"TOTAL = R$ "<<(a + ((15 * b) / 100))<<endl;

    return 0;
}

