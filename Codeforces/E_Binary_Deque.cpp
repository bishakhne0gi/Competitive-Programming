#include <bits/stdc++.h>
#define vi vector<int>
#define vl vector<long long>
#define ll long long
#define pii pair<ll, ll>
#define ff first
#define ss second
#define setBits(x) builin_popcount(x)
using namespace std;
void helper()
{
}
ll last(vector<ll> ps, ll target, ll n)
{
    ll low = 0, high = n - 1, res = -1;
    while (low <= high)
    {
        ll mid = (low + high) / 2;
        if (ps[mid] > target)
            high = mid - 1;
        else if (ps[mid] < target)
            low = mid + 1;
        else
        {
            res = mid;
            low = mid + 1;
        }
    }
    return res;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, s;
        cin >> n >> s;
        vl a(n);
        vl ps(n);
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        ps[0] = a[0];
        for (ll i = 1; i < n; i++)
            ps[i] = ps[i - 1] + a[i];
        ll ans = INT_MAX, target;
        for (ll i = 0; i < n; i++)
        {
            target = ps[i] + s;
            if (a[i] == 1)
            {
                target--;
            }
            ll lastPos = last(ps, target, n);
            if (lastPos != -1)
                ans = min(ans, n - (lastPos - i + 1));
        }
        if (ans != INT_MAX)
            cout << ans << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}