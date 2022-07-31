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
      for(int i=0; i<n; i++)
        cin>>a[i];
      vl x(n);
    //   for(int i=0; i<n; i++)
    //     x[i]=0;
      for(int i=0; i<n; i++)
      {
        for(int j=0; j<n; j++)
        {
            if(i!=j)
            {
                x[i]=a[j]^x[i];
                // cout<<x[i]<<" ";
            }
        }
        // cout<<endl;
      }
    //   for(int i=0; i<n; i++)
    //   {
    //     cout<<x[i]<<" ";
    //   }
    //   cout<<endl;
    int res=0;
      for(int i=0; i<n; i++)
      {
        if(x[i]==a[i])
        {
            res=x[i];
        }
      }
      cout<<res<<endl;
    }
    return 0;
}