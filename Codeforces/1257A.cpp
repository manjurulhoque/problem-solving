#include<bits/stdc++.h>
using namespace std;


int main()
{
    cin.tie(0);
	cout.tie(0);
	iostream::sync_with_stdio(0);

    int T;
    cin >> T;

    while(T-- > 0) {
        int n, x, a, b;
        cin>>n>>x>>a>>b;
        cout << min(abs(a - b) + x, n - 1) << '\n';
    }

    return 0;
}
