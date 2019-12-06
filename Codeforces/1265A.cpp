#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;

    while(tc--) {
        string str;
        cin>>str;
        int l = str.size();
        bool b = false;
        for(int i = 0; i < l; i++) {
            if(i == 0) {
                if(str[i] == '?' && str[i + 1] == 'a') {
                    str[i] = 'b';
                }
                else if(str[i] == '?' && str[i + 1] == 'b') {
                    str[i] = 'a';
                }
                else if(str[i] == '?' && str[i + 1] == 'c') {
                    str[i] = 'b';
                }
            }
            if(str[i] != '?' && str[i + 1] != '?' && str[i] == str[i + 1]) {
                b = true;
                break;
            }
            if(str[i] == '?') {
                if(str[i - 1] == 'a' && (str[i + 1] == 'b' || str[i + 1] == '?')) {
                    str[i] = 'c';
                }
                else if(str[i - 1] == 'a' && (str[i + 1] == 'c' || str[i + 1] == '?')) {
                    str[i] = 'b';
                }
                else if(str[i - 1] == 'b' && (str[i + 1] == 'a' || str[i + 1] == '?')) {
                    str[i] = 'c';
                }
                else if(str[i - 1] == 'b' && (str[i + 1] == 'c' || str[i + 1] == '?')) {
                    str[i] = 'a';
                }
                else if(str[i - 1] == 'c' && (str[i + 1] == 'a' || str[i + 1] == '?')) {
                    str[i] = 'b';
                }
                else if(str[i - 1] == 'c' && (str[i + 1] == 'b' || str[i + 1] == '?')) {
                    str[i] = 'a';
                }
            }
        }
        if(b) cout<<-1<<endl;
        else cout<<str<<endl;
    }

    return 0;
}

