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
      vl a;
      ll n;
      cin>>n;
      for(int i=1; i<=n; i++)
      {
          ll z;
          cin>>z;
          a.push_back(z);
      }
      ll store=0;
      for(int i=n-1; i>=0; i--)
      {
        //   cout<<"ok"<<endl;
          if(a[i]!=0)
          {
              store=i;
              break;
          }
      }
      cout<<store<<endl;
    }
    return 0;
}