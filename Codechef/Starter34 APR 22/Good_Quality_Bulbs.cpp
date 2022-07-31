#include <bits/stdc++.h>
#define vi vector<int>
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
      long long n,x;
      cin>>n>>x;
      long long sum=0;
      vector<long long> arr;
      for(int i=0; i<n-1; i++)
      {
          int z;
          cin>>z;
          sum+=z;
      }
      long long store=n*x;
      long long res=(store-sum);
      if(res<0)
        cout<<0<<endl;
      else
        cout<<res<<endl;
    }
    return 0;
}