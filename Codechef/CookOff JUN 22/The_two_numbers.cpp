
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
        ll prod=INT_MIN;
        if (!(n & 1))
        {
            for (ll i = n/2; i >=1; i--)
            {
                if(__gcd(i,n-i)==1)
                {
                    cout<<(i*n-i)-1<<endl;
                    break;
                }
            }

        }
        else
        {
            ll a=n/2;
            ll b=a+1;
            cout<<(a*b-1)<<endl;
        }
    }
    return 0;
}