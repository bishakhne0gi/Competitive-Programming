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
    ll n;
    cin >> n;
    vl a;
    ll res = 0, start, end;
    unordered_map<ll, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        a.push_back(z);
    }
    for (ll i = 0; i < n; i++)
    {
        ll subarrayLength = a[i];
        if (i + 1 - subarrayLength < 0)
        {
            start = 0;
        }
        else
            start = i - subarrayLength + 1;
        // auto it=mp.begin();
        if (mp.count(a[i]) != 0 && mp[a[i]] >= start)
        {
            start = mp[a[i]] + 1;
        }
        if (start + subarrayLength - 1 < n)
        {
            end = start + subarrayLength - 1;
        }
        else
        {
            end = n - 1;
        }
        if (end - start + 1 != subarrayLength || start > end)
            continue;
        res = res + min((i - start + 1), (n - end));
        mp[a[i]] = i;
    }
    cout << res << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        helper();
    }
    return 0;
}