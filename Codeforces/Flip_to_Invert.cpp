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
      ll n,k;
      cin>>n>>k;
      vl arr;
      ll c1=0, c0=0;
      for(int i=0; i<n; i++)
      {
          ll z;
          cin>>z;
          if(z==1)
            c1+=1;
          else
            c0+=1;
          arr.push_back(z);
      }
      if(c1==n || c0==n)
        cout<<0<<endl;
      else
      {
          
      }
    }
    return 0;
}