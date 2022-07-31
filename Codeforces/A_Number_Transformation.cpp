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
      int x,y;
      cin>>x>>y;
      if(y<x)
        cout<<"0 0"<<endl;
      else if(x==y)
        cout<<"1 1"<<endl;
      else
      {
          if(y%x==0)
            {
                ll store=y/x;
                cout<<"1 "<<store<<endl;
            }
            else
                cout<<"0 0"<<endl;
          
      }
    }
    return 0;
}