#include<iostream>
#include<string>
using namespace std;

/// Accepted

int main()
{
    string str, str2;
    cin>>str;

    str2 = str;

    bool condition1 = false, condition2 = false;

    int length = str.size();

    if(str[0] >= 'a' && str[0] <= 'z')
    {
        condition2 = true;
        str[0] -= 32;
    }
    else if(str[0] >= 'A' && str[0] <= 'Z')
    {
        condition1 = true;
        str[0] += 32;
    }

    for(int i = 1; i < length; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            condition2 = true;
            condition1 = true;
            str[i] += 32;
        }
        else {
            condition2 = false;
            condition1 = false;
            break;
        }
    }

    if(condition1 || condition2) cout<<str<<endl;
    else cout<<str2<<endl;

//    if(str[0] >= 'A' && str[0] <= 'Z')
//    {
//        cout<<str<<endl;
//    }
//    else
//    {
//        str[0] -= 32;
//        for(int i = 1; i < str.length(); i++)
//        {
//            str[i] += 32;
//        }
//        cout<<str<<endl;
//    }

    return 0;
}
