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
      ll maxi=INT_MIN;
      for(int i=1; i<=4; i++)
      {
          ll z;
          cin>>z;
          maxi=max(maxi,z);
      }
      cout<<maxi<<endl;
    }
    return 0;
}