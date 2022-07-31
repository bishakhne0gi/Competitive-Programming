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
        ll count=0,odd=0, even=0;
        for (ll i = 0; i < n; i++)
        {
            ll z;
            cin >> z;
            // a.push_back(z);
            if(z&1)
                odd+=1;
            else
                even+=1;
        }
        cout<<min(odd,even)<<endl;
    }
    return 0;
}