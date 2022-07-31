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
        ll n;
        cin >> n;
        vl a(n);
        bool flag = true;
        ll start=1,sum=0,s_sum=0;
        map<ll, ll> mp;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        set<ll> s(a.begin(), a.end());
        if (s.size() == a.size())
            cout << -1 << endl;
        else
        {
            for (auto itr = mp.begin(); itr != mp.end(); itr++)
            {
                if (itr->second < 2)
                {
                    flag = false;
                    break;
                }
                // cout << itr->first << " " << itr->second << endl;
            }
            if (flag == false)
                cout << -1 << endl;
            else
            {
                for (auto itr = mp.begin(); itr != mp.end(); itr++)
                {
                    s_sum+=itr->second;
                    sum=s_sum;
                    cout<<sum<<" ";
                    sum-=1;
                    while(start<=sum)
                    {
                        cout<<start<<" ";
                        start++;
                    }
                    start=s_sum+1;
                }
                cout<<endl;
            }
        }
    }
    return 0;
}