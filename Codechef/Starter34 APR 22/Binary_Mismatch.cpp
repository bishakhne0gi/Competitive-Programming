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
      int n;
      cin>>n;
      string s;
      cin>>s;
      string temp=s;
      int sum=0,s1=0, ai, aj;
      if(n&1)
        cout<<"NO"<<endl;
      else
      {
          
          for(int i=0; i<n; i++)
          {
            if(s[i]=='0')
              sum++;
            else
              sum--;
          }
          int j=0;
          for(int i=0; i<n; i++)
          {
            if(s[i]=='0')
              s1++;
            else 
              s1--;
            if(2*s1==sum)
            {
              aj=j+1;
              ai=i+1;
              break;
            }
            else if(s1>=0 && sum<0)
            {
              s1=0;
              j=i+1;
            }
            else if(s1<=0 && sum>0)
            {
              j=i+1;
              s1=0;
            }
          }
          cout<<"YES"<<endl;
          cout<<aj<<" "<<ai<<endl;
      }
    }
    return 0;
}