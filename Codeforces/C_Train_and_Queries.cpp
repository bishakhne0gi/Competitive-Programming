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
int lsrch(vl a,int key)
{
    ll store=-1;
    for(int i=0; i<a.size(); i++)
    {
        if(key==a[i])
        {
            store=i;
            break;
        }
    }
    return store;
}
int revlsrch(vl a,int key)
{
    ll store=-1;
    for(int i=a.size()-1; i>=0; i--)
    {
        if(key==a[i])
        {
            store=i;
            break;
        }
    }
    return store;
}
// bool boolsrch(vl a, int key)
// {
//     bool flag=false;
//     for(int i=0; i<a.size(); i++)
//     {
//         if(key==a[i])
//         {
//             flag=true;
//             break;
//         }
//     }
//     return flag;
// }
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
      ll n,k;
      cin>>n>>k;
      vl a(n);
      map<ll,ll> mp;
      map<ll,ll> revmp;
      for(ll i=0; i<n; i++)
      {
        cin>>a[i];
      }
      for(ll i=0; i<n; i++)
      {
        mp[a[i]]=i;
      }
      for(ll i=n-1; i>=0; i--)
      {
        revmp[a[i]]=i;
      }
      for(int i=1; i<=k; i++)
      {
        ll u,v;
        cin>>u>>v;
        auto it1=revmp.find(u);
        auto it2=mp.find(v);
        if(it1!=revmp.end() && it2!=mp.end())
        {
            
            if(it1->second<it2->second)
            {
                cout<<"YES"<<endl;
            }
            else
                cout<<"NO"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
       
      }
       cout<<endl;
    }
    return 0;
}