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
      if(n&1) cout<<-1<<endl;
      else
      {
        ll temp=n/2;
        cout<<temp<<" "<<temp<<" "<<0<<endl;
      }
    }
    return 0;
}