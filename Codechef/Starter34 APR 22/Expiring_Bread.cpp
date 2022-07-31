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
      int n,m,k;
      cin>>n>>m>>k;
      int store=m*k;
      if(store>=n)
        cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}