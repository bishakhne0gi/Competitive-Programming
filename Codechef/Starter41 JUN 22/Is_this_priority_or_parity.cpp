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
      ll n,x;
      cin>>n>>x;
      if(n&1)
      {
          if(x<=2)
            cout<<"ODD"<<endl;
          else
            cout<<"EVEN"<<endl;
      }
      else
      {
          if(x==2)
            cout<<"ODD"<<endl;
          else
            cout<<"EVEN"<<endl;
      }
    }
    return 0;
}