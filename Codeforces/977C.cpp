#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool cmp(pair<ll,ll>a,pair<ll,ll>b)
{
    return a.first < b.first;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n,k;
    cin>>n>>k;
    unordered_map<ll,ll> mymap;
    vector <pair<ll,ll>> vec;
    for(int i = 0; i<n; i++)
    {
        ll temp;
        cin>>temp;
        mymap[temp]++;
    }
    for(auto itr=mymap.begin(); itr!=mymap.end(); itr++)
    {
        vec.push_back({itr->first,itr->second});
    }
    sort(vec.begin(),vec.end(),cmp);
    ll cnt = 0,flag = 0,ans;
    if(k == 0)
    {
        if( vec[0].first>=2)
        {
            cout<<vec[0].first - 1<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }

    }
    else
    {
        for(int i = 0; i<vec.size(); i++)
        {
            cnt += vec[i].second;
            if(cnt> k)
            {
                flag = 1;
                break;
            }
            else if(cnt == k)
            {
                ans = vec[i].first;
                break;
            }
        }
        if(flag == 1)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<ans<<endl;
        }
    }

    return 0;
}
