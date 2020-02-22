#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int pos = 0, len = 0, consonent = 1;

//    for(int i = 0; i < s.size(); i++)
//    {
//        if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'Y')
//        {
//            max_jump = max(max_jump, (i + 1 - pos));
//            pos = i + 1;
//        }
//    }
    int l = s.size();

    for(int i = 0; i < l; i++)
    {
        if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'Y')
        {
            consonent = 1;
        }
        else
        {
            consonent++;
        }

        len = max(len, consonent);
    }

    cout<<len<<endl;

    return 0;
}
