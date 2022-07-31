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
    //   ll sum=INT_MIN;
      for(int i=0; i<n; i++)
      {
          cin>>a[i];
      }
      ll sum=a[0]+a[n-1];
      for(int i=0; i<n-1; i++)
      {
          ll temp=a[i]+a[i+1];
          sum=max(sum,temp);
      }
      cout<<sum<<endl;
    }
    return 0;
}