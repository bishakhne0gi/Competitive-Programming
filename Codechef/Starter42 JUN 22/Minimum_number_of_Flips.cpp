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
      ll t1=0, t2=0;
      for(ll i=0; i<n; i++)
      {
          cin>>a[i];
          if(a[i]==1)
            t1+=1;
           else
            t2+=1;
      }
      if(n&1)
        cout<<-1<<endl;
      else
        {
            ll mini=min(t1,t2);
            ll half=n/2;
            cout<<(half-mini)<<endl;
        }
    }
    return 0;
}