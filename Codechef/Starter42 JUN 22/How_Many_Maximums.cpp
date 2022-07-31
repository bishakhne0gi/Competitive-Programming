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
      string s;
      cin>>s; int c=0;
      for(int i=0;i<n-1;i++){

          if(s[i]=='1'){
              c++;
              while(s[i]=='1')
              i++;
          }

      }
      if(s[n-2]=='0')
      c++;
      cout<<c<<endl;
    }
    return 0;
}