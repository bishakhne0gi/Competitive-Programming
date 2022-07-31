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
    ll count = 0;
   
    for (int i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        a.push_back(z);
    }
    if (n & 1)
        cout << "NO" << endl;
    else
    {
         bool flag = true;
        vl ans(n);
        sort(a.begin(),a.end());
        ll j = 0;
        for (int i = 0; i < n; i += 2)
        {
            ans[i] = a[j++];
        }
        for (int i = 1; i < n; i += 2)
        {
            ans[i] = a[j++];
        }
        //  for (int i = 0; i < n; i++)
        //     {
        //         cout << ans[i] << " ";
        //     }
        for (int i = 0; i < n; i++)
        {
            if (!(i&1))
            {
                if (i == 0)
                {
                    if (ans[i] < ans[i + 1] && ans[i] < ans[n - 1])
                        continue;
            
                    else
                    {
                        flag = false;
                        break;
                    }
                }
                else
                {

                    if (ans[i] < ans[i + 1] && ans[i] < ans[i - 1])
                        continue;
                   
                    else
                    {
                        flag = false;
                        break;
                }
                }
            }
            else
            {
                if (i == n - 1)
                {
                    if (ans[i] > ans[0] && ans[i] > ans[i - 1])
                        continue;
                    else
                    {
                        flag = false;
                        break;
                    }
                }
                else{

                    if (ans[i] > ans[i + 1] && ans[i] > ans[i - 1])
                        continue;
                    else
                    {
                        flag = false;
                        break;
                    }
                }
            }
        }
        if (flag == true)
        {
            cout << "YES" << endl;
            for (int i = 0; i < n; i++)
            {
                cout << ans[i] << " ";
            }
            cout << endl;
        }
        else
            cout << "NO" << endl;
    }
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