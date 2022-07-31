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
      ll n,x;
      cin>>n>>x;
      vl a(2*n);
      for(ll i=0; i<2*n; i++)
        cin>>a[i];
      sort(a.begin(),a.end());
      bool flag=true;
      for(ll i=0; i<n; i++)
      {
        ll temp=a[i+(n)]-a[i];
        if(temp<x)
        {
            flag=false;
            break;
        }
      }
      if(flag==true)
        cout<<"YES"<<endl;
      else
        cout<<"NO"<<endl;
    }
    return 0;
}