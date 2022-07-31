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
    int n;
    cin>>n;
    vl a;
    vl b;
    for(int i=0; i<n; i++)
    {
        int z;
        cin>>z;
        a.push_back(z);
    }
    for(int i=0; i<n; i++)
    {
        
        b.push_back(a[i]);
    }
    sort(a.begin(),a.end(),greater<ll>());
    // cout<<a[0]<<" "<<a[n-1]<<endl;
    ll mini=0, maxi=0;
     for(int i=n-1; i>=0; i--)
    {
        if(a[n-1]==b[i])
        {
            mini=i;
            break;
        }
    }
    for(int i=n-1; i>=0; i--)
    {
        if(a[0]==b[i])
        {
            maxi=i;
            break;
        }
    }
    //   cout<<mini<<endl;
    // cout<<maxi<<endl;
    ll res=abs(maxi-0)+abs(mini-(n-1));
     
    if(mini<maxi)
    {
        res=res-1;
        cout<<res<<endl;
    }
    else
    {
        cout<<res<<endl;
    }

    
    // int t;
    // cin >> t;
    // while (t--)
    // {
      
    // }
    return 0;
}