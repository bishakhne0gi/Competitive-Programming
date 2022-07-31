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
    int t;
    cin >> t;
    while (t--)
    {
      long long n,m,l;
      cin>>n>>m>>l;
      ll i=(n-1);
      while(i>=0)
      {
        m=m%(l+i);
        i=m-l;
      }
      cout<<m<<endl;
     
    }
    return 0;
}