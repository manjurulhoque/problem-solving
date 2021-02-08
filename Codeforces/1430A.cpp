#include<bits/stdc++.h>
using namespace std;

#define ff                first
#define ss                second
#define pii               pair<int,int>
#define vi                vector<int>
#define mp                make_pair
#define For(i, n)         for (int i = 0; i < n; i++)
#define ll                long long
#define ull               unsigned long long
#define pb                push_back
#define ps                push
#define pf                push_front
#define mp                make_pair
#define fast_in_out       ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{

    fast_in_out;

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n == 1 || n == 2 || n == 4)
        {
            cout<<-1<<endl;
        }
        else
        {
            int a = 0, b = 0, c = 0;

            c = n / 7;
            n %= 7;

            if(n == 0)
            {
                cout<<a<<" "<<b<<" "<<c<<endl;
                continue;
            }
            if (n == 3 || n == 6)
            {
                a = n / 3;
            }
            else if (n == 5)
            {
                b = 1;
            }
            else if (n == 1)
            {
                c = max(c-1,0);
                n = n + 7;
                a = 1;
                b = 1;
            }
            else if (n == 2)
            {
                c = max(c - 1, 0);
                a = 3;
            }
            else if (n == 4)
            {
                c = max(c - 1, 0);
                a = 2;
                b = 1;
            }

            cout << a << " " << b << " " << c << "\n";
        }
    }

    return 0;
}
