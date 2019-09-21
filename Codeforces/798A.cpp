#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str, str_reverse;
    cin>>str;

    str_reverse = str;

    reverse(str_reverse.begin(), str_reverse.end());

    int len = str.length(), same = 0;

    for(int i = 0; i < len / 2; i++)
    {
        if(str[i] != str_reverse[i])
        {
            same++;
        }
    }

    if(same == 1) puts("YES");



    return 0;
}
