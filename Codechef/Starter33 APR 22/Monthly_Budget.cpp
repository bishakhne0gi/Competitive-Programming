#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
      int x,y;
      cin>>x>>y;
      int store=30*y;
      if(store<=x)
      {
          cout<<"YES"<<endl;
      }
      else  
        cout<<"NO"<<endl;
    }
    return 0;
}