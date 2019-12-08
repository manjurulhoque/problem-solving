#include<bits/stdc++.h>
using namespace std;

/// Accepted

int main()
{
    int n, m;
    cin>>n>>m;
    bool d = true;

    for(int i = 1; i <= n; i++)
    {
        if(i % 2 != 0)
        {
            for(int j = 1; j <= m; j++)
            {
                cout<<"#";
            }
            cout<<endl;
        }
        else
        {
            if(i == 2 || d)
            {
                for(int j = 1; j < m; j++)
                {
                    cout<<".";
                }
                cout<<"#"<<endl;
                d = false;
            } else {

                cout<<"#";
                for(int j = 1; j < m; j++)
                {
                    cout<<".";
                }
                cout<<endl;
                d = true;
            }
        }
    }

    return 0;
}
