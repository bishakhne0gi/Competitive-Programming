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
      ll n,k;
      cin>>n>>k;
      string s;
      cin>>s;
      int start=0;
      vl a;
      bool flag=false;
      for(int i=0; i<s.size(); i++)
      {
          if(s[i]=='W')
          {
              a.push_back(i-start);
              start=i+1;
          }
      }
      for(int i=0; i<a.size(); i++)
      {
          cout<<a[i]<<" ";
      }
      sort(a.begin(),a.end());
      for(int i=0; i<a.size(); i++)
      {
          if(k==a[i])
          {
              flag=true;
              break;
          }
      }
      if(flag==true)
        cout<<0<<endl;
      else
      {
         while(a[i]<k && i<n)
         {
             temp=a[i];
             i++;
         }
         cout<<k-
      }
      cout<<endl;
    }
    return 0;
}