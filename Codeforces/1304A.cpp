#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll x, y, a, b, c = 0;
        //bool done = false;
        cin>>x>>y>>a>>b;

//        while(x <= y)
//        {
//            x += a;
//            y -= b;
//            if(x <= y) {
//                c++;
//            }
//
//            if(x == y) done = true;
//        }
//
//        if(done) cout<<c<<endl;
//        else {
//            cout<<-1<<endl;
//        }

        if((x - y) % (a + b) != 0) cout<<-1<<endl;
        else cout<<abs(x - y) / (a + b)<<endl;
    }

    return 0;
}

