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
      ll a,b;
      cin>>a>>b;
      if(a%3==0 || b%3==0)
        cout<<0<<endl;
      else{
          ll am=a%3;
          ll bm=b%3;
          if(am==bm)    cout<<1<<endl;
          else{
              cout<<2<<endl;
          }
      }
    }
    return 0;
}