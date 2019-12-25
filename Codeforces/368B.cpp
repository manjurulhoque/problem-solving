#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, q;
    cin>>n>>m;

    int a[n];
    set<int> distinct;

    for(int i = 0; i < n; i++) {
        cin>>q;
        a[i] = q;
    }

    while(m--) {
        cin>>q;
        distinct.clear();
        for(int j = q - 1; j < n; j++)
        {
            distinct.insert(a[j]);
        }

        cout<<distinct.size()<<endl;
    }

    return 0;
}

