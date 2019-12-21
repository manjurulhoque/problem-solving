#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string p, h;
        cin>>p;
        cin>>h;

        string h1 = h;
        reverse(h1.begin(), h1.end());
        if(p == h1) {
            cout<<"YES"<<endl;
        }
        else {
            int l = p.size();
            int l1 = h.size();
            if(l1 - l == 1 || (l1 - l) % 2 == 0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }

    return 0;
}

