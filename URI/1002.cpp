#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    const double n = 3.14159;

    double R;

    cin>>R;

    cout<<std::setprecision(4)<<std::fixed<<"A="<<(n * (R*R))<<endl;

    return 0;
}
