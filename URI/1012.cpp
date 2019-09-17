#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double a, b, c;
    double pi = 3.14159;

    cin>>a;
    cin>>b;
    cin>>c;

    cout<<std::setprecision(3)<<std::fixed<<"TRIANGULO: "<<(a * c * .5)<<endl;
    cout<<std::setprecision(3)<<std::fixed<<"CIRCULO: "<<(pi * c * c)<<endl;
    cout<<std::setprecision(3)<<std::fixed<<"TRAPEZIO: "<<((a + b) * c) / 2<<endl;
    cout<<std::setprecision(3)<<std::fixed<<"QUADRADO: "<<(b * b)<<endl;
    cout<<std::setprecision(3)<<std::fixed<<"RETANGULO: "<<(a * b)<<endl;

    return 0;
}
