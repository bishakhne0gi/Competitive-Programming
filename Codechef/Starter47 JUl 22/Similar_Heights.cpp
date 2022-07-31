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
        map<ll, ll> mp;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        vector<pair<ll, ll>> p(mp.begin(), mp.end());
        ll count = 0;
        for (ll i = 0; i < p.size(); i++)
        {
            if (p[i].second == 1)
            {
                count += 1;
            }
        }
        int mini = INT_MAX;
        if (p[p.size() - 1].second == 1 && count == 1)
        {
            for (ll i = 0; i < p.size() - 1; i++)
            {
                if (p[i].second > 2)
                {
                    mini = min(mini, 1);
                }
                else if (p[i].second == 2)
                {
                    mini = min(mini, 2);
                }
            }
            cout << mini << endl;
        }
        else
        {

            if (count == 0)
                cout << 0 << endl;
            else if (count == 1)
                cout << 1 << endl;
            else if (count % 2 == 0)
                cout << count / 2 << endl;
            else if (count % 2 != 0)
                cout << (count / 2) + 1 << endl;
        }
    }
    return 0;
}