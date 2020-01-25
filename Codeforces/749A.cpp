#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> answer;
    if (n % 2)
    {
        answer.push_back(3);
        n -= 3;
    }

    while (n)
    {
        answer.push_back(2);
        n -= 2;
    }

    cout << answer.size() << endl;
    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << " ";
    }

    cout<<endl;

    return 0;
}
