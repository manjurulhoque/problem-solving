#include<bits/stdc++.h>
using namespace std;

/// Accepted

int main()
{
    int n;
    cin>>n;

    char rows[n][6] = {};
    bool possible = false;

    for(int i = 0; i < n; i++)
    {
        cin>>rows[i];
        if(rows[i][0] == 'O' && rows[i][1] == 'O' && possible == false)
        {
            rows[i][0] = '+';
            rows[i][1] = '+';
            possible = true;
        }
        else if(rows[i][3] == 'O' && rows[i][4] == 'O' && possible == false)
        {
            rows[i][3] = '+';
            rows[i][4] = '+';
            possible = true;
        }
    }

    if(!possible)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        for(int i = 0; i < n; i++)
        {
            cout<<rows[i]<<endl;
        }
    }

//    vector< vector<string> > table;
//    string s;
//
//    for(int i = 0; i < n; i++)
//    {
//        vector<string> row;
//        for(int j = 0; j < n; j++)
//        {
//            cin>>s;
//            row.push_back(s);
//        }
//        table.push_back(row);
//    }

    return 0;
}

