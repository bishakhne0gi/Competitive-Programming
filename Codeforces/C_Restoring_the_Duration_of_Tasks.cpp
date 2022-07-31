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
      vl a;
      vl b;
      for(ll i=0; i<n; i++)
      {
          ll z;
          cin>>z;
          a.push_back(z);
      }
      for(ll i=0; i<n; i++)
      {
          ll z;
          cin>>z;
          b.push_back(z);
      }
      cout<<b[0]-a[0]<<" ";
      for(ll i=1; i<n; i++)
      {
          if(a[i]>=b[i-1])
            cout<<b[i]-a[i]<<" ";
          else if(a[i]<b[i-1])
          {
              cout<<b[i]-b[i-1]<<" ";
          }
      }
      cout<<endl;
    }
    return 0;
}