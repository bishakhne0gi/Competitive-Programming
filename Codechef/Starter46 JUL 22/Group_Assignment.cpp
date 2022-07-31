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
        unordered_map<ll,ll> s;
        for(ll i=0; i<n; i++)
        {
            s[a[i]]++;
        }
        bool flag=true;
        // for(const auto &x: s)   
        //   {
        //     cout<<x.first<<" "<<x.second;
        //     cout<<endl;
        //   }
        for(const auto &x: s)   
          {
            if(x.first!=x.second && (x.second%x.first!=0))
            {
                flag=false;
                break;
            }
          } 
          if(flag==false)
            cout<<"NO"<<endl;
          else
            cout<<"YES"<<endl;
    }
    return 0;
}