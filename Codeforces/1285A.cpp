#include<bits/stdc++.h>
using namespace std;

/// Accepted

int main()
{
    int length;
    string S;
    cin >> length >> S;

    int lefts = 0, rights = 0;
    for(int i = 0; i < length; i++)
    {
        switch(S[i])
        {
            case 'L' : lefts++; break;
            case 'R' : rights++; break;
        }
    }

    int answer = (lefts + rights + 1);
    cout << answer << "\n";

    return 0;
}
