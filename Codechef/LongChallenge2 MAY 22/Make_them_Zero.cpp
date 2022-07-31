#include <bits/stdc++.h>
#define vi vector<int>
#define vl vector<long long>
#define ll long long
#define pii pair<int,int>
#define ff first
#define ss second
#define setBits(x) __builtin_popcount(x)
using namespace std;
void helper()
{
    
}
int highestPowerof2(int n)
{
    int res = 0;
    for (int i=n; i>=1; i--)
    {
        if ((i & (i-1)) == 0)
        {
            res = i;
            break;
        }
    }
    return res;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
      int n;
      cin>>n;
      vl a;
      for(int i=1; i<=n; i++)
      {
          ll z;
          cin>>z;
          a.push_back(z);
      }
      set<ll> s(a.begin(),a.end());
      vector<ll> v(s.begin(),s.end());
      // for(int i=0; i<v.size();i++)
      // {
      //   cout<<v[i]<<" ";
      // }
      // cout<<endl;
      // vector<ll> visited(v.size(),0);
      // for(int i=0; i<v.size();i++)
      // {
      //   cout<<visited[i]<<" ";
      // }
      // cout<<endl;
      ll ans=0;
      for(int i=0; i<v.size();i++)
      {
        ans=(ans|v[i]);
      }
      // setBits(ans);
      cout<<setBits(ans)<<endl;
    }
    return 0;
}