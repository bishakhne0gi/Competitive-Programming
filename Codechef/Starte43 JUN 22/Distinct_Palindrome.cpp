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
        ll n, x;
        cin >> n >> x;
        string res = "";
        string temp_res = "";
        vector<char> store;
        if (x == 1)
        {
            for (int i = 1; i <= n; i++)
            {
                res += 'a';
            }
            cout << res << endl;
        }
        else
        {
            if ((n & 1))
            {
                if (x > (n/2+1))
                    cout << -1 << endl;
                else
                {
                    for (int i = 1; i < x; i++)
                    {
                        temp_res += (i + 96);
                    }
                    int diff = n / 2 - (x - 1);
                    for (ll i = 1; i <= diff; i++)
                    {
                        temp_res += 'a';
                    }
                    res = temp_res;
                    res += (x + 96);
                    reverse(temp_res.begin(), temp_res.end());
                    res += temp_res;
                    cout << res << endl;
                }
            }
            else
            {
                if (x > n / 2)
                    cout << -1 << endl;
                else
                {
                    for (int i = 1; i <=x; i++)
                    {
                        temp_res += (i + 96);
                    }
                    int diff = n / 2 - x ;
                    for (ll i = 1; i <= diff; i++)
                    {
                        temp_res += 'a';
                    }
                    res += temp_res;
                    reverse(temp_res.begin(), temp_res.end());
                    res += temp_res;
                    cout << res << endl;
                }
            }
        }
        
    }
    return 0;
}