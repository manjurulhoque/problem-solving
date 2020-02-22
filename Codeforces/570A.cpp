#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n, m, i, j;
    cin>>n>>m;

    ll arr[n][m];
    vector<int> stage1;

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }

        stage1.push_back(distance(arr[i], max_element(arr[i], arr[i] + n)) + 1);
    }

//    for(i = 0; i < m; i++)
//    {
//        for(j = 0; j < n; j++)
//        {
//            cout<<arr[i][j]<<" ";
//        }
//
//        cout<<endl;
//    }

//    for(i = 0; i < stage1.size(); i++) cout<<stage1[i]<<" ";

    if(m == 1) {
        cout<<distance(arr[0], max_element(arr[0], arr[0] + n)) + 1<<endl;
    }
    else {
        if(stage1.size() <= 2) cout << distance(stage1.begin(), max_element(stage1.begin(), stage1.end())) + 1 << endl;
        else cout << distance(stage1.begin(), min_element(stage1.begin(), stage1.end())) + 1 << endl;
    }


    return 0;
}
