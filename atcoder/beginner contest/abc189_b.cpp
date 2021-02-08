#include <iostream>
using namespace std;

int main()
{
    int n, x;

    cin>>n>>x;

    int v, p;

    int total = 0;

    for(int i = 1; i <= n; i++) {
        cin>>v>>p;
        total += v * p;

        if(total > x * 100) {
            cout<<i<<endl;
            return 0;
        }
    }

    puts("-1");

    return 0;
}

