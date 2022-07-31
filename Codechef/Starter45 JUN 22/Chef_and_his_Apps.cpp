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
      ll s,x,y,z;
      cin>>s>>x>>y>>z;
      if(x+y+z<=s)
        cout<<0<<endl;
      else{
        if(x+z<=s)
            cout<<1<<endl;
        else if(y+z<=s)
            cout<<1<<endl;
        else
            cout<<2<<endl;
      }
    }
    return 0;
}