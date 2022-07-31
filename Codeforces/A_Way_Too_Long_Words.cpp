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
      string s;
      cin>>s;
      string ans="";
      int len=s.size();
      if(len>10)
      {
          cout<<s[0];
          cout<<len-2;
          cout<<s[len-1]<<endl;
      }
      else
        cout<<s<<endl;
    }
    return 0;
}