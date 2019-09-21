#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<bool> alphabets(28, false);
    for (int i = 0; i < n; ++i)
    {
    	alphabets[tolower(s[i])-'a'] = true;
    }
    for (int i = 0; i < 26; ++i)
    {
    	if(!alphabets[i])
    	{
    		cout <<"NO\n";
    		return 0;
    	}

    }
    cout <<"YES\n";

    return 0;
}
