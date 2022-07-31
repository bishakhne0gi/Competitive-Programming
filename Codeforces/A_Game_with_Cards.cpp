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
      ll n,m;
      cin>>n;
      int t1=INT_MIN, t2=INT_MIN;
      for(int i=0; i<n; i++)
      {
          int z;
          cin>>z;
          t1=max(t1,z);
      }
      cin>>m;
      for(int i=0; i<m; i++)
      {
          int z;
          cin>>z;
          t2=max(t2,z);
      }
      if(t1>t2)
      {
          cout<<"Alice"<<endl;
          cout<<"Alice"<<endl;
      }
      else if(t1<t2)
      {
          cout<<"Bob"<<endl;
          cout<<"Bob"<<endl;
      }
      if(t1==t2)
      {
          cout<<"Alice"<<endl;
          cout<<"Bob"<<endl;
      }

    }
    return 0;
}