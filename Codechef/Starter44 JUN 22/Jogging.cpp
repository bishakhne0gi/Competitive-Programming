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
    ll t;
    cin >> t;
    vector<ll> a(10000001);
    ll mod=1000000007;
    a[0]=1;
    for (ll i = 1; i <= 1000000; i++)
    {
        a[i] = (a[i - 1] * 2) % mod;
    }
    while (t--)
    {
        ll n, x; 
        cin >> n >> x;
        cout<<(x*a[n-1])%mod<<endl;
    }
    return 0;
}