#include<bits/stdc++.h>
using namespace std;

///Accepted

int main()
{
    map<string, int> mymap;
    int t;
    cin>>t;

    while(t--) {
        string s;
        cin>>s;
//        cout<<mymap.count(s)<<endl;

        if(mymap.count(s) == 0) {
            mymap[s] = 1;
            cout<<"OK"<<endl;
        } else {
            //found
            int value = mymap.at(s);
            cout<<s<<value<<endl;

            mymap[s] = ++value;
        }
    }

    return 0;
}

