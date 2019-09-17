#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    const double pi = 3.14159;
    float R;


    cin>>R;

    double result = (4.0/3) * pi * (R * R * R);

    cout<<std::setprecision(3)<<std::fixed<<"VOLUME = "<<result<<endl;

    return 0;
}
