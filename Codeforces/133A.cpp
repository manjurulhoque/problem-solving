#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "HQ9+", ss;

    cin>>ss;

    int ll = ss.size();

    for(int i = 0; i < ll; i++) {
        if(ss[i] == 'H' || ss[i] == 'Q' || ss[i] == '9') {
            cout<<"YES"<<endl;
            return 0;
        }
    }

    cout<<"NO"<<endl;

    return 0;
}
