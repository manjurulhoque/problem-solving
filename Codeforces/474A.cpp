#include<bits/stdc++.h>
using namespace std;

/// Accepted

int main()
{
    string s = "qwertyuiopasdfghjkl;zxcvbnm,./", s1, s2, s3 = "";
    cin>>s1;

    if(s1 == "R") {
        cin>>s2;
        int found;
        int l = s2.size();
        for(int i = 0; i < l; i++)
        {
            found = s.find(s2[i]);
            s3.push_back(s[found-1]);
        }

        cout<<s3<<endl;
    }
    else {
        cin>>s2;
        int found;
        int l = s2.size();
        for(int i = 0; i < l; i++)
        {
            found = s.find(s2[i]);
            s3.push_back(s[found+1]);
        }

        cout<<s3<<endl;
    }

    return 0;
}

