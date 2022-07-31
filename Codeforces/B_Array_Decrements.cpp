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
        vl b(n);
        vl d;
        vl e;
        bool flag = true;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        if (n == 1)
        {
            if (b[0] > a[0])
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
        else
        {

            for (ll i = 0; i < n; i++)
            {

                if (b[i] > a[i])
                {
                    flag = false;
                    break;
                }
            }
            if (flag == false)
            {
                cout << "NO" << endl;
            }
            else
            {
                for (ll i = 0; i < n; i++)
                {
                    if (b[i] != 0)
                        d.push_back(a[i] - b[i]);
                }
                for (ll i = 0; i < n; i++)
                {
                    if (b[i] == 0)
                        e.push_back(a[i] - b[i]);
                }
                // for (ll i = 0; i < d.size(); i++)
                // {
                //     cout << d[i] << " ";
                // }
                // cout << endl;
                // for (ll i = 0; i < e.size(); i++)
                // {
                //     cout << e[i] << " ";
                // }

                bool d_flag = true, e_flag = true;
                // for (ll i = 0; i < d.size() - 1; i++)
                // {
                //     if (d[i] != d[i + 1])
                //     {
                //         d_flag = false;
                //         break;
                //     }
                // }
                unordered_set<ll> s(d.begin(), d.end());
                if (s.size() > 1)
                {
                    cout << "NO" << endl;
                }
                else
                {
                    for (ll i = 0; i < e.size(); i++)
                    {
                        if (e[i] > d[0])
                            e_flag = false;
                    }
                    if (e_flag == false)
                        cout << "NO" << endl;
                    else
                        cout << "YES" << endl;
                }
            }
            // cout << endl;

            // cout << endl;
        }
    }
    return 0;
}
