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
      ll n,l;
      cin>>n>>l;
      vl a(n);
      for(ll i=0; i<n; i++)
      {
        cin>>a[i];
      }
      sort(a.begin(),a.end());
      ll d=2*max(a[0],l-a[n-1]);
      for(int i=1; i<n; i++)
      {
        d=max(d,a[i]-a[i-1]);
      }
      cout<<fixed<<setprecision(10)<<(double)d/2<<endl;
    return 0;
}