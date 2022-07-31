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
      ll temp=n/3;
      if(n%3==0)
      {
          cout<<(n/3)<<" "<<(n/3)+1<<" "<<(n/3)-1<<endl;
      }
      else if(n%3==1)
      {
           cout<<(n/3)<<" "<<(n/3)+2<<" "<<(n/3)-1<<endl;
      }
      else if(n%3==2)
      {
          cout<<(n/3)+1<<" "<<(n/3)+2<<" "<<(n/3)-1<<endl;
      }
    }
    return 0;
}