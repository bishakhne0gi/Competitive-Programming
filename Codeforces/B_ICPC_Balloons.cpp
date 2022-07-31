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
      cin>>s;
      unordered_map<char,int> mp;
      for(int i=0; i<n; i++)
        mp[s[i]]++;
      ll store=mp.size();
      ll temp=n-store;
      ll ans=(store*2)+temp;
      cout<<ans<<endl;
    }
    return 0;
}