#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    int current = 0, min_capacity = 0;

    while(t--) {
        int a, b;
        cin>>a>>b;
        current = b + current - a;
        if(current > min_capacity) {
            min_capacity = current;
        }
    }

    cout<<min_capacity<<endl;

    return 0;
}

