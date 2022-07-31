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
      int w,x,y,z;
      cin>>w>>x>>y>>z;
      if((w+(y*z))>x)
        cout<<"Overflow"<<endl;
      else if((w+(y*z))==x)
        cout<<"Filled"<<endl;
      else
        cout<<"Unfilled"<<endl;
    }
    return 0;
}