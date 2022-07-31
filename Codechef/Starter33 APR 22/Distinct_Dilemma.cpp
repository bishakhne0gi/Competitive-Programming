#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
      int n;
      cin>>n;
      vector<int> a;
      int add=0;
      int count=0, inc=1;
      for(int i=0; i<n; i++)
      {
          int z;
          cin>>z;
          add=add+z;
          a.push_back(z);
      }
      while(add>=0)
      {
          count=count+1;
          add=add-inc;
          inc=inc+1;
      }
      count=count-1;
      cout<<count<<endl;
    }
    return 0;
}