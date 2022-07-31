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
        ll n, k;
        cin >> n >> k;
        vl a(n);
        int res = 0;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        if (k == 1)
        {
            if (n % 2 == 0)
            {
                int temp = n - 2;
                cout << temp / 2 << endl;
            }
            else
            {
                int temp = n - 2;
                cout << (temp / 2) + 1 << endl;
            }
        }
        else
        {
            for (int i = 1; i <= n - 2; i++)
            {
                if (a[i] > a[i - 1] + a[i + 1])
                    res += 1;
            }
            cout << res << endl;
        }
    }
    return 0;
}