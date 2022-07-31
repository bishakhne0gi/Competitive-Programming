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
        vl b(n);
        bool flag = true;
        for (ll i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        if (n == 1)
            cout << "YES" << endl;
        else
        {
            ll maxi = b[0], mini = b[0];
            for (ll i = 1; i < n; i++)
            {
                if (b[i] >= maxi)
                    maxi = b[i];
                else if (b[i] <= mini)
                {
                    mini = b[i];
                }
                else
                {
                    flag = false;
                    break;
                }
            }
            // cout<<"MAX: "<<maxi<<" "<<"MINI: "<<mini<<endl;
            if(flag==false)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
    }
    return 0;
}