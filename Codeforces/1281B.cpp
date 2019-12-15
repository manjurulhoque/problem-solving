#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string s, s1, s2;
        cin>>s>>s1;

        if(s < s1)
        {
            cout<<s<<endl;
        }
        else
        {
            int l = s.size();
            s2 = s;
            bool small = false;
            for(int i = 0; i < l; i++)
            {
                for(int j = 0; j < l; j++)
                {
                    if(s[i] != s[j]) swap(s[i], s[j]);
                    if(s < s1)
                    {
                        small = true;
                        s2 = s;
                        break;
                    }
                    else
                    {
                        small = false;
                    }

                    s = s2;
                }

                if(small) break;
            }

            if(small) cout<<s2<<endl;
            else cout<<"---"<<endl;
        }
    }

    return 0;
}

