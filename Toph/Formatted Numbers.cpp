#include<bits/stdc++.h>
using namespace std;

/// Accepted

int main()
{
    string s;
    vector<char> sss;

    cin>>s;
    reverse(s.begin(), s.end());
    int l = s.size();

    for(int i = 0; i < l; i++)
    {
        if((i + 1) % 3 == 0)
        {
            //ss[i] = s[i];
            //ss[i + 1] = ',';
            sss.push_back(s[i]);
            if(i != l - 1) sss.push_back(',');
        }
        else
        {
            //ss[i] = s[i];
            sss.push_back(s[i]);
        }
    }

    string ss(sss.begin(), sss.end());
    reverse(ss.begin(), ss.end());
    cout<<ss<<endl;
    //reverse(ss.begin(), ss.end());

    return 0;
}

