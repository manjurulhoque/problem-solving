#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin>>t;

    while(t--)
    {
        int c = 0;
        cin>>n;
        string s;
        cin>>s;
        for(int i = 0; i < n; i++)
        {
            if(s[i] = 'A' && s[i + 1] == 'P')
            {
                s[i + 1] = 'P';
                c++;
                i++;888888888888888888888888888888888888888888888888888888
            }
        }
        cout<<c<<endl;
    }

    return 0;
}
