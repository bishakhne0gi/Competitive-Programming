#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x,y;
    string s;
    cin >> t;
    while (t--)
    {
      cin>>n>>x>>y;
      cin>>s;
      int count=0;
      for(int i=0; i<n-1; i++)
      {
          if(s[i]==s[i+1])
            count+=1;
      }
      if(count==n-1)
        cout<<0<<endl;
      else
      {
          if(x<=y)
            cout<<x<<endl;
          else  
            cout<<y<<endl;
      }
    }
    return 0;
}