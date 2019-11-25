#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;

    cin>>s;

    if((count(s.begin(), s.end(), '7') + count(s.begin(), s.end(), '4')) == s.size()) {puts("YES"); return 1;}
    stringstream convert(s);
    int n = 0;
    convert >> n;
    if(n % 4 == 0 || n % 7 == 0) puts("YES");
    else cout<<"NO"<<endl;

    return 0;
}
