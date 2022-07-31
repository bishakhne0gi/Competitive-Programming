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
      int n,x;
      cin>>n>>x;
      vi arr;
      for(int i=1; i< n/2+1; i++)
      {
          arr.push_back(x+i);
      }
      for(int i=1; i< n/2+1; i++)
      {
          arr.push_back(x-i);
      }
      if(n&1)
        arr.push_back(x);
      for(int i=0; i<arr.size(); i++)
      {
          cout<<arr[i]<<" ";
      }
      cout<<endl;
    }
    return 0;
}