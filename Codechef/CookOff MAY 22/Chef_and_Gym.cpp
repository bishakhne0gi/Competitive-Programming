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
      int x,y,z;
      cin>>x>>y>>z;
      if((x+y)<=z)
        cout<<2<<endl;
      else{
          if(x<=z)
            cout<<1<<endl;
          else
            cout<<0<<endl;
        }
    }
    return 0;
}