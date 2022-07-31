#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
      int n,k;
      cin>>n>>k;
      int left=k;
      string temp="";
      for(int i=1; i<=n; i++)
      {
          int z;
          cin>>z;
          if(z<=left)
          {
              temp+='1';
              left=left-z;
          }
          else
            temp+='0';
            
      }
      cout<<temp<<endl;
    }
    return 0;
}