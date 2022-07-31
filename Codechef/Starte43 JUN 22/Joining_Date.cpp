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
      ll a1,a2;
      if(n%5==0)
      {
        a1=(n/5)-1;
      }
      else
      {
        a1=n/5;
      }
      if(k%5==0)
      {
        a2=(k/5)-1;
      }
      else
      {
        a2=k/5;
      }
      cout<<abs(a1-a2)<<endl;
    }
    return 0;
}