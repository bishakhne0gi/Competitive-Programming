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
    int t;
    cin >> t;
    while (t--)
    {
      int n,x,y;
      cin>>n>>x>>y;
      if(n==1)
        cout<<"0"<<endl;
      else if(n==2)
        cout<<"3"<<endl;
      else
      {
          ll horz_vert=0, up_left=0, up_right=0, down_left=0, down_right=0, count=0;
          horz_vert=2*(n-1);
          down_left=min(n-x,y-1);
          up_left=min(y-1,x-1);
          down_right=min(n-y,n-x);
          up_right=min(x-1,n-y);
          count+=horz_vert+up_left+down_left+down_right+up_right;
          cout<<count<<endl;
        //   int a=x, b=y, count=0;
        //   while(a!=1)
        //   {
        //       count+=1;
        //       a--;
        //   }
        //   a=x;
        //    while(a!=n)
        //   {
        //       count+=1;
        //       a++;
        //   }
        //   a=x;
        //   while(b!=1)
        //   {
        //       count+=1;
        //       b--;
        //   }
        //   b=y;
        //   while(b!=n)
        //   {
        //       count+=1;
        //       b++;
        //   }
        //   b=y;
        //  while(a!=1 && b!=1)
        //  {
        //      count+=1;
        //      a--;
        //      b--;
        //  }
        //  a=x,b=y;
        //  while(a!=n && b!=n)
        //  {
        //      count+=1;
        //      a++;
        //      b++;
        //  }
        //  a=x,b=y;
        //  while(a!=1 && b!=n)
        //  {
        //      count+=1;
        //      a--;
        //      b++;
        //  }
        //  a=x,b=y;
        //  while(a!=n && b!=1)
        //  {
        //      count+=1;
        //      a++;
        //      b--;
        //  }
        //  a=x,b=y;
        // cout<<count<<endl;
      }
    }
    return 0;
}