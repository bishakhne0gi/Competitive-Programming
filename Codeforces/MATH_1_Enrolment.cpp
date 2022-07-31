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
      ll x,y;
      cin>>x>>y;
      if(x>=y)
        cout<<0<<endl;
      else
        cout<<(y-x)<<endl;
    }
    return 0;
}