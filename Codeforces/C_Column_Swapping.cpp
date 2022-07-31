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
      cin>>n>>m;
      vector<vector<long long>> a(n);
      for(int i=0; i<n; i++)
      {
          for(int j=1; j<=m; j++)
          {
              ll z;
              cin>>z;
              a[i].push_back(z);
          }
      }
      for(int i=0; i<n; i++)
      {
          for(int j=0; j<m; j++)
          {
              cout<<a[i][j]<<" ";
          }
          cout<<endl;
      }
      cout<<endl;
    }
    return 0;
}