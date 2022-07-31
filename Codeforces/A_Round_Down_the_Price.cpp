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
      ll k=n;
      ll count=0;
      while(k>0)
      {
        ll d=k%10;
        count+=1;
        k/=10;
      }
    //   cout<<"COUNT: "<<endl;
    //   cout<<count<<endl;
    count-=1;
      double store=pow(10,count);
      ll temp=store;
    //   cout<<"STORE: "<<store<<endl;
      cout<<(n-temp)<<endl;
    }
    return 0;
}