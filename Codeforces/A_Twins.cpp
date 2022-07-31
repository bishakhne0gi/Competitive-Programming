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
    
      ll n;
      cin>>n;
      vl a;
      ll sum=0;
      for(int i=0; i<n; i++)
      {
          ll z;
          cin>>z;
          sum+=z;
          a.push_back(z);
      }
      sort(a.begin(),a.end(), greater<ll>());
      ll half=sum/2;
      ll temp=0;
      ll count=0;
      ll i=0;
      while(temp<=half)
      {
          temp+=a[i];
          i++;
          count++;
      }
      cout<<count<<endl;
    return 0;
}