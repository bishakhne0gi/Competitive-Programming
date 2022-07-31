#include <bits/stdc++.h>
#define vi vector<int>
#define vl vector<long long>
#define ll long long
#define pii pair<int, int>
#define ff first
#define ss second
#define setBits(x) builin_popcount(x)
using namespace std;
int main()
{
    ll t, n, i, j;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vl arr;
        ll sum = 0;
        unordered_map<ll, ll> m;
        for (i = 0; i < n; i++)
        {
            int z;
            cin >> z;
            sum += z;
            arr.push_back(z);
        }
        for (i = 0; i < n; i++)
        {
            m[arr[i]]++;
        }
        ll t_count = 0;
        for (ll i = 0; i < n; i++)
        {
            double rem = (sum * 1.0 - arr[i]);

            if (m.find(rem) != m.end())
            {

                ll count = m[rem];

                for (ll j = 0; j < count; j++)

                {
                    t_count += 1;
                }
            }
        }
        double r = 2.0 * sum / n;
        ll res = 0;
        for (i = 0; i < n; i++)
        {
            ll store = r - arr[i];
            // cout << "MAP: " << m[store] << endl;
            ll temp= store+arr[i];
            if (temp == r)
            {
                if (store == arr[i] && m[store] > 0)
                {
                    res = res + m[store];
                    // cout << "RES: " << res << endl;
                    res = res - 1;
                }
                else
                {
                    res += m[store];
                }
            }
        }
        cout << res / 2 << endl;
    }
}