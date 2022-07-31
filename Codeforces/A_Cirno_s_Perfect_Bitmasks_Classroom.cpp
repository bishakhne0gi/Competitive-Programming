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
      ll x;
      if(x==1)
        cout<<3<<endl;
      else if(x==2)
        cout<<3<<endl;
      else
      {
          if(x&1)
            cout<<(x+2)<<endl;
          else
            cout<<(x+1)<<endl;
      }
    }
    return 0;
}