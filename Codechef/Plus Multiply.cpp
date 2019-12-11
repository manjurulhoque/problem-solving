#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;

int main()
{
//    lli tc;
//    cin>>tc;
//
//    while(tc--) {
//        lli n;
//        cin>>n;
//        lli arr[n];
//
//        for(lli i = 0; i < n; i++) {
//            cin>>arr[i];
//        }
//
//        lli c = 0;
//        for(lli i = 0; i < n; i++) {
//            for(lli j = i + 1; j < n; j++) {
//                if(i != j && (arr[i] + arr[j]) == (arr[i] * arr[j])) {
//                    c++;
//                }
//            }
//        }
//
//        cout<<c<<endl;
//    }

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n,zerocount=0,twocount=0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            if (k == 0)
            {
                zerocount++;
            }
            else if (k == 2)
            {
                twocount++;
            }
        }
        int x = (zerocount * (zerocount - 1))/2;
        int y = (twocount * (twocount - 1))/2;
        cout <<x + y<<endl;
    }

    return 0;
}
