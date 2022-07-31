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
      ll n;
      cin>>n;
      ll store=n/7;
      ll temp=(n-(store*7));
      if(n==1 || n==3 || n==5)
        cout<<"NO"<<endl;
      else
        cout<<"YES"<<endl;
    }
    return 0;
}