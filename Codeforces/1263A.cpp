#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long tc;
//    cout<<7%2<<endl;
    cin>>tc;

    while(tc--)
    {
        int r, g, b, days = 0;
        cin>>r>>g>>b;
        if(r == g == b) {
            days += r;
        }
        else if(r > g && r > b) {
            days += r - g;
            r -= g;
            g = 0;

            days += r;
        }
//        if(r == b)
//        {
//            days += r;
//            r = 0;
//            b = 0;
//        }
//        else if(r > b)
//        {
//            while(r != 0 && b > 0)
//            {
//                days += 1;
//                r -= 1;
//                b -= 1;
//            }
//
//            if(g > r)
//            {
//                while(g != 0 && r > 0)
//                {
//                    days += 1;
//                    g -= 1;
//                    r -= 1;
//                }
//            }
//            else if(r > g)
//            {
//                while(r != 0 && g > 0)
//                {
//                    days += 1;
//                    g -= 1;
//                    r -= 1;
//                }
//            }
//        }
//        else if(b > r)
//        {
//            while(b != 0 && r > 0)
//            {
//                days += 1;
//                b -= 1;
//                r -= 1;
//            }
//            if(g > b)
//            {
//                while(g != 0 && b > 0)
//                {
//                    days += 1;
//                    g -= 1;
//                    b -= 1;
//                }
//            }
//            else if(b > g)
//            {
//                while(b != 0 && g > 0)
//                {
//                    days += 1;
//                    g -= 1;
//                    b -= 1;
//                }
//            }
//        }
        cout<<days<<endl;
    }

    return 0;
}


