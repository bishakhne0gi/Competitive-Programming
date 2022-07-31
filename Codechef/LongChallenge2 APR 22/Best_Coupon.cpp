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
      int n;
      cin>>n;
      if(n>1000)
      {
          double store=(10*n)/100;
        cout<<store<<endl;
      }
      else
        cout<<100<<endl;
    }
    return 0;
}