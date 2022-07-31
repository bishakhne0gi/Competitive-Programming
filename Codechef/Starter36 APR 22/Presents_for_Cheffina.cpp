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
      int q=n/5;
      int r=n%5;
      if(r==0)
      {
          cout<<(5*q)-q<<endl;
      }
      else
      {
          cout<<(5*q)+r-q<<endl;
      }
    }
    return 0;
}