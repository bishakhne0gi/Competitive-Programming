#include <bits/stdc++.h>
#define vi vector<int>
#define vl vector<long long>
#define ll long long
#define pii pair<int, int>
#define ff first
#define ss second
#define setBits(x) builin_popcount(x)
using namespace std;
void helper()
{
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        vl a;
        ll count = 0;
        map<ll,ll> mp;
        vl p;
        ll n;
        ll h = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            ll z;
            cin >> z;
            a.push_back(z);
        }
        sort(a.begin(), a.end());
        for(ll i=0; i<n; i++)
        {
            mp[a[i]]++;
        }
        for(auto itr=mp.begin(); itr!=mp.end(); itr++)
        {
            ll store=itr->first+(itr->second-1);
            p.push_back(store);
        }
        sort(p.begin(),p.end());
        // for(ll i=0; i<p.size(); i++)
        // {
        //     cout<<p[i]<<" ";
        // }
        // cout<<endl;
        cout<<p[p.size()-1]<<endl;
    }
    return 0;
}