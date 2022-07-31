#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int n;
    cin >> t;
    while (t--)
    {
      cin>>n;
      int b=1;
      int result=0;
    //   for(int i=2; i<=n; i++)
    //   {
    //       if(i%2==0)
    //       {
    //           b=b^i;
    //       }
    //       else
    //           b=b&i;
    //   }
    //   cout<<b<<endl;

        if(n%2==0)
      {
          if(n%4==0)
          {
              result=n^3;
          }
          else
          {
              result=3;
          }
      }

      else
      {
          if(( n-1) % 4 == 0)
          {
            result=(3^(n-1))&n;
          }
          else
            result=3;
      }
      
      cout<<result<<endl;
    }
    return 0;
}