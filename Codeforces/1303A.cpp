#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string s, ss;
        cin>>s;
        ss = s;

        auto first_index = s.find('1');
        //reverse(ss.begin(), ss.end());

        auto last_index = s.rfind('1');

        int c = 0;

        for(int i = first_index; i < last_index; i++)
        {
            if(s[i] == '0')
            {
                c++;
            }
        }

        cout<<c<<endl;
    }

    return 0;
}

