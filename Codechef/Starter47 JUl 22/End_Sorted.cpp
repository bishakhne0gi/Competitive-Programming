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
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        vl b(a.begin(), a.end());
        sort(b.begin(), b.end());
        ll count = 0;
        ll maxi,mini;
        // for (ll i = 0; i < n; i++)
        //     cout << b[i] << " ";
        // cout << endl;
        if (a[0] == b[0] && a[n - 1] == b[n - 1])
            cout << 0 << endl;
        else if(a[0]==b[0] && a[n-1]!=b[n-1])
        {
            for(ll i=0; i<n; i++)
            {
                if(a[i]==b[n-1])
                {
                    maxi=i;
                }
            }
            cout<<((n-1)-maxi)<<endl;
        }
        else if(a[0]!=b[0] && a[n-1]==b[n-1])
        {
            for(ll i=0; i<n; i++)
            {
                if(a[i]==b[0])
                {
                    mini=i;
                }
            }
            cout<<mini<<endl;
        }
        else
        {
             for(ll i=0; i<n; i++)
            {
                if(a[i]==b[n-1])
                {
                    maxi=i;
                }
                if(a[i]==b[0])
                {
                    mini=i;
                }
            }
            ll store=(n-1)-maxi+mini;
            if(maxi<mini)
            {
                cout<<store-1<<endl;
            }
            else
                cout<<store<<endl;
        }
    }
    return 0;
}