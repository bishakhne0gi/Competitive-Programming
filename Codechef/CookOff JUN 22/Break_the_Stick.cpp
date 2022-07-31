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
      if(x==1)
        cout<<"YES"<<endl;
      else
      {
          ll temp=n-x;
          if((n&1) && !(x&1))
            cout<<"NO"<<endl;
          else if((n&1) && (x&1))
            cout<<"YES"<<endl;
          else if(!(n&1))
             cout<<"YES"<<endl;
      }
    }
    return 0;
}