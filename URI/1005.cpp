#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    float a, b;

    cin>>a;
    cin>>b;

    cout<<std::setprecision(5)<<std::fixed<<"MEDIA = "<<((a * 3.5) + (b * 7.5)) / (3.5 + 7.5)<<endl;

    return 0;
}
