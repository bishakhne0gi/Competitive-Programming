#include <bits/stdc++.h>
#define vi vector<int>
#define pii pair<int,int>
#define ff first
#define ss second
#define setBits(x) builin_popcount(x)
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
      int n;
      cin>> n;
      vi arr;
      for(int i=0; i<n; i++)
      {
          int z;
          cin>>z;
          arr.push_back(z);
      }
      sort(arr.begin(),arr.end());
      int sum=0;
      for(int i=1; i<n; i++)
      {
          sum+=arr[i];
      }
      cout<<sum<<endl;
    }
    return 0;
}