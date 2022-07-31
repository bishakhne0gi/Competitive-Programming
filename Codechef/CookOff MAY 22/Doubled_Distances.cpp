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
        vl a;
        bool flag = true, flag1 = true;
        for (ll i = 0; i < n; i++)
        {
            ll z;
            cin >> z;
            a.push_back(z);
        }
        sort(a.begin(), a.end());
        // for (int i = 0; i < n - 1; i++)
        // {
        //     if (a[i] == a[i + 1])
        //     {
        //         flag1 = false;
        //         break;
        //     }
        // }
        // if (flag1 == false)
        // {
        //     cout << "No" << endl;
        // }
        // else
        // {
            //   if(flag==false)
            //  {
            //      cout<<"No"<<endl;
            //      exit(1);
            //  }
            //    for(ll i=0; i<n; i++)
            //   {
            //       cout<<a[i]<<" ";
            //   }
            //   cout<<endl;
            vector<pair<ll, ll>> diff;
            for (ll i = 1; i < n - 1; i++)
            {
                ll prev = abs(a[i] - a[i - 1]);
                ll after = abs(a[i + 1] - a[i]);
                diff.push_back({prev, after});
            }
            //   for(int i=0; i<diff.size(); i++)
            //   {
            //       cout<<diff[i].first<<" "<<diff[i].second<<endl;
            //   }

            for (ll i = 0; i < diff.size(); i++)
            {
                if (2*diff[i].first == diff[i].second || 2*diff[i].second == diff[i].first)
                    continue;

                else
                {
                    flag = false;
                    break;
                }
            }
            if (flag == true)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        
    }
    return 0;
}