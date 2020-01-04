#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--) {
        int r, g, b, c = 0;
        cin>>r>>g>>b;
        if(r % 2 != 0) c++;
        if(g % 2 != 0) c++;
        if(b % 2 != 0) c++;

        if(c >= 2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
