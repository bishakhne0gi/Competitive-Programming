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
      int n,r;
      cin>>n>>r;
      vi a;
      vi b;
      vi diff;
      ll res=0;
      for(int i=0; i<n; i++)
      {
          int z;
          cin>>z;
          a.push_back(z);
      }
      for(int i=0; i<n; i++)
      {
          int z;
          cin>>z;
          b.push_back(z);
      }
      for(int i=0; i<n; i++)
      {
          int d=a[i]-b[i];
          diff.push_back(d);
      }
     vector<pair<ll,ll>> p;
     for(int i=0; i<n; i++)
     {
         p.push_back({diff[i],a[i]});
     }
     sort(p.begin(),p.end());
     for(auto i:p)
     {
         ll effective_cost=i.first, original_cost=i.second, cashback=original_cost-effective_cost;
         if(r<original_cost)continue;   
        r=r-original_cost;
         res=res+1;
         res=res+(r/effective_cost);
         r=r%effective_cost;
         r=r+cashback;

     }
      cout<<res<<endl;
    }
    return 0;
}