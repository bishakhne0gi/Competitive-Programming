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
      ll n,m;
      cin>>n;
      vl a;
      for(int i=0; i<n; i++)
      {
          ll z;
          cin>>z;
          a.push_back(z);
      }
      cin>>m;
      ll s=0;
      for(int i=0; i<m; i++)
      {
          ll z;
          cin>>z;
          s+=z;
      }
      ll res=s%n;
      cout<<a[res]<<endl;
    }
    return 0;
}