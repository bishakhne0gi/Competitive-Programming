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
      ll store=0;
      for(ll i=0; i<n; i++)
      {
        cin>>a[i];
        store=store^a[i];
      }
      if(store==0)
        cout<<"YES"<<endl;
      else
        cout<<"NO"<<endl;
    }
    return 0;
}