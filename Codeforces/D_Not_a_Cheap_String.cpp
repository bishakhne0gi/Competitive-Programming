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
      string s;
      cin>>s;
      ll p;
      cin>>p;
      sort(s.begin(),s.end());
      ll sum=0;
      string ans="";
      for(int i=0; i<s.size(); i++)
      {
        ll ch=s[i];
        ll add=s[i]-'a'+1;
        sum+=add;
        if(sum<=p)
        {
            ans+=s[i];
        }
        else
        {
            break;
        }
      }
      cout<<ans<<endl;

    }
    return 0;
}