#include<bits/stdc++.h>
using namespace std;

int mypow(int n, int k)
{
    int ans = 1;
    for(int i = 0; i < n; i++) ans *= k;

    return ans;
}

int main()
{
    int l, r, k;
    cin>>l>>r>>k;

    bool result = false;

    for(int i = 0; ; i++)
    {
        int rr = mypow(i, k);
        if(rr >= l && rr <= r) {
            cout<<rr<<endl;
            result = true;
        }
        else {
            break;
        }
    }

    if(!result) cout<<-1<<endl;


    return 0;
}
