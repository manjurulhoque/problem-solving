#include<bits/stdc++.h>
using namespace std;

bool hasEnding (std::string const &fullString, std::string const &ending)
{
    if (fullString.length() >= ending.length())
    {
        return (0 == fullString.compare (fullString.length() - ending.length(), ending.length(), ending));
    }
    else
    {
        return false;
    }
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;

        if(hasEnding (s, "po"))
        {
            cout<<"FILIPINO"<<endl;
        }
        else if(hasEnding (s, "desu") || hasEnding (s, "masu"))
        {
            cout<<"JAPANESE"<<endl;
        }
        else if(hasEnding (s, "mnida"))
        {
            cout<<"KOREAN"<<endl;
        }
    }

    return 0;
}

