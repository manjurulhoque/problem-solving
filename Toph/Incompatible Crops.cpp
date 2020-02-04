#include<bits/stdc++.h>
using namespace std;

#define __FastIO   ios_base::sync_with_stdio(false); cin.tie(0);

int main()
{
    int r, c;

    cin>>r>>c;

    char arr[r][c];

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cin>>arr[i][j];
        }
    }

    int c = 0;

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            if(arr[i][j] == '.' && (i + 1 > r - 1) && arr[i+1][j] == '.' && arr[i][j+1] == '.' && arr[i][j-1] == '.')
            {
                c++;
            }
            else
            {
                if(arr[i][j] == '.' && arr[i-1][j] == '.' && arr[i][j+1] == '.' && arr[i][j-1] == '.' && arr[i+][j] == '.')
                    c++;
            }
        }
    }

    return 0;
}
