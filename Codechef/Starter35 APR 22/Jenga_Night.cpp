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
    ll t;
    cin >> t;
    while (t--)
    {
      ll n,x;
      cin>>n>>x;
      if(x%n==0)
        cout<<"YES"<<endl;
      else
        cout<<"NO"<<endl;
    }
    return 0;
}