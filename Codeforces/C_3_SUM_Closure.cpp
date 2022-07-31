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
        ll sum = 0;
        bool flag = true;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        ll diff = abs(a[0] - a[1]);
        if (n % 2 == 0)
        {
            flag=false;
        }
        else
        {
            if (a[0] < 0 && sum==0)
            {
                for (ll i = 0; i < n; i++)
                {
                    if (i % 2 == 0 && a[i]<=0)
                        continue;
                    else if(i % 2 != 0 && a[i]>0)
                        continue;
                    else
                        {
                            flag=false;
                            break;
                        }

                }
            }
            else
            {
                 for (ll i = 0; i < n; i++)
                {
                    if (i % 2 == 0 && a[i]<=0)
                        continue;
                    else if(i % 2 != 0 && a[i]>0)
                        continue;
                    else
                        {
                            flag=false;
                            break;
                        }

                }
            }
        }
        if(flag==true)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        // if (sum == 0)
        //     cout << "YES" << endl;
        // else
        //     cout << "NO" << endl;
    }
    return 0;
}