#include<bits/stdc++.h>
using namespace std;


/// Solved

int main()
{
    int t;
    cin>>t;

    char ch[t];

    for(int i = 0; i < t; i++) {
        cin>>ch[i];
    }

    int c = 0;

    for(int i = 0; i < t; i++) {
        if(i < strlen(ch)) {
            if(ch[i] == ch[i + 1]) {
                c++;
            }
        }
    }

    cout<<c<<endl;


    return 0;
}
