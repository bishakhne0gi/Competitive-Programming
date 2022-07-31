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
      double x,y;
      cin>>x>>y;
      if(y<= (1.07*x) )
        cout<<"YES"<<endl;
      else
        cout<<"NO"<<endl;
    }
    return 0;
}