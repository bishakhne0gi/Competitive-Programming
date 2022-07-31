#include <bits/stdc++.h>
#define vi vector<int>
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
      int a,b,c,d;
      cin>>a>>b;
      cin>>c>>d;
      if(c>=a && d>=b)
        cout<<"POSSIBLE"<<endl;
      else
        cout<<"IMPOSSIBLE"<<endl;
    }
    return 0;
}