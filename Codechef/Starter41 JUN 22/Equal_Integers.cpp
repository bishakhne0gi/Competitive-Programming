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
      if(x==y)
        cout<<0<<endl;
      else if(x<y)
        cout<<(y-x)<<endl;
      else
      {
          if((x&1 && y&1) || (!(x&1) && !(y&1)))
            cout<<(x-y)/2<<endl;
          else
            cout<<((x-y)/2)+2<<endl;

      }
    }
    return 0;
}