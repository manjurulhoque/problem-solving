#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    float a, b, c;

    cin>>a;
    cin>>b;
    cin>>c;

    cout<<std::setprecision(1)<<std::fixed<<"MEDIA = "<<((a * 2) + (b * 3) + (c * 5)) / (2 + 3 + 5)<<endl;

    return 0;
}
