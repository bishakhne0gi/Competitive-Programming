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
      ll sum=0;
      for(int i=0; i<n; i++)
      {
        cin>>a[i];
        sum+=a[i];
      }
      ll store=(sum)/(n+1);
      for(int i=0; i<n; i++)
      {
        cout<<(a[i]-store)<<" ";
      }
      cout<<endl;
      
    }
    return 0;
}