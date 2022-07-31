#include <bits/stdc++.h>
#define vi vector<int>
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
      int n,m;
      cin>>n>>m;
      ll sum=0;
      if(n==1 && m==1)
        cout<<0<<endl;
      else if((n==1 && m==2) || (n==2 && m==1))
        cout<<1<<endl;
      else if((n==1 && m!=1) || (m==1 && n!=1) )
        cout<<-1<<endl;
      else if((n%2==0 && m%2==0) || (n%2!=0 && m%2!=0))
        {
            ll maxi=max(n,m);
            sum=(maxi-1)*2;
            cout<<sum<<endl;
        }
        else{
            ll maxi=max(n,m);
            sum=(maxi-1)+(maxi-2);
            cout<<sum<<endl;
        }
        
    }
    return 0;
}