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
      ll sx,sy,ex,ey;
      cin>>sx>>sy>>ex>>ey;
      if(sx==ex || sy==ey)
        cout<<2<<endl;
      else
        cout<<1<<endl;      

    }
    return 0;
}