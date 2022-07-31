#include <bits/stdc++.h>
#define vi vector<int>
#define vl vector<long long>
#define ll long long
#define pii pair<int,int>
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
      cin>>n;
      vl a(n);
      vl b;
      vl c;
      unordered_map<ll,ll> mp_a;
      unordered_map<ll,ll> mp_b;
      unordered_map<ll,ll> mp_b;
      for(ll i=0; i<n; i++)
      {
          cin>>a[i];
          mp_a[a[i]]++;
      }
      for(ll j=0; j<n/2; j++)
      {
          b.push_back(a[j]);
          mp_b[b[i]]++;
      }
      for(ll j=n/2; j<n; j++)
      {
          c.push_back(a[j]);
          mp_b[b[i]]++;
      }
      for(ll i=0; i<b.size(); i++)
      {
          cout<<b[i]<<" ";
      }
      cout<<endl;
      for(ll i=0; i<c.size(); i++)
      {
          cout<<c[i]<<" ";
      }
      cout<<endl;

    }
    return 0;
}