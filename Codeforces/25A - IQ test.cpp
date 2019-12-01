#include<bits/stdc++.h>
using namespace std;

/// Accepted

int main()
{
    int n;
    int type = 1;
    cin>>n;
    int arr[n], t1 = 0, t2 = 0, index1, index2;

    for(int i = 1; i <= n; i++) {
        cin>>arr[i];
        if(arr[i] % 2 == 0) {
            t1++;
            index1 = i;
        }
        else {
            t2++;
            index2 = i;
        }
    }

    if(t1 > t2) cout<<index2<<endl;
    else cout<<index1<<endl;

    return 0;
}
