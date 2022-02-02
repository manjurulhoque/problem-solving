#include <iostream>
using namespace std;

int main()
{
    int s, w;
    cin>>s>>w;

    if(w >= s) puts("unsafe");
    else puts("safe");

    return 0;
}
