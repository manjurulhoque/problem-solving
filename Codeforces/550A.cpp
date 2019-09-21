#include<bits/stdc++.h>
using namespace std;

int main()
{
//    string str, ab ("AB"), ba ("BA");
//    cin>>str;
//
//    if(str.find(ab) != string::npos && str.find(ba) != string::npos)
//    {
//        if(str.find(ab)+1 == str.find(ba))
//        {
//            cout<<"NO"<<endl;
//        }
//        else if(str.find(ba) == str.find(ab)+1)
//        {
//            cout<<"NO"<<endl;
//        }
//        else
//        {
//            cout<<"YES"<<endl;
//        }
//    }
//    else
//    {
//        cout<<"NO"<<endl;
//    }

    string str;
    cin>>str;

    int len = str.size();

    if(len <= 3) puts("NO");
    else
    {
        int a = str.find("AB");
        int b = str.find("BA", a+2);
        int c = str.find("BA");
        int d = str.find("AB", c+2);
        if(a != -1 && b != -1 || c != -1 && d != -1) puts("YES");
        else puts("NO");
    }

    return 0;
}
