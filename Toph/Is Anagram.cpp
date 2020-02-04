#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    cin>>s1;
    cin>>s2;

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    int l1 = s1.size();
    int l2 = s2.size();

    for(int i = 0; i < l1; i++)
    {
        if(s1[i] != s2[i]) {
            puts("No");
            return 0;
        }
    }

    puts("Yes");

    return 0;
}
