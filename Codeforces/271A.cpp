#include<bits/stdc++.h>
using namespace std;

/// Accepted

int main()
{
    int n;
    cin>>n;
    n++;

    for(int i = n; i <= 10000; i++)
    {
        int num = i;
        bool visited[10] = {false};

        while (num)
        {
            if (visited[num % 10])
                break;

            visited[num % 10] = true;

            num = num/10;
        }

        if (num == 0) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}
