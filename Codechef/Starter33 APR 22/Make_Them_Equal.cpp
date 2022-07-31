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
      int noo=0, noe=0, res=INT_MAX;
      for(int i=0; i<n; i++)
      {
          int z;
          cin>>z;
          if(z%2==0)
            noe+=1;
          else
            noo+=1;
          a.push_back(z);
      }
    if(noo==0 || noe==0)
        cout<<0<<endl;
    else  if(n==1)
        cout<<0<<endl;
    else
    {
        res=noe;
        int store=noo/2;
        if(noo%2==0)
        {
            res=min(res,store);
        }
        cout<<res<<endl;
    }
    }
    return 0;
}