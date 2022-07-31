#include <bits/stdc++.h>
#define vi vector<int>
#define vl vector<long long>
#define ll long long
#define pii pair<int, int>
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
    cin >> n;
    vector<string> st(n);
    map<string, bool> mp;
    for (int i = 0; i < n; i++)
    {
      cin >> st[i];
      mp[st[i]] = true;
    }
    for (int i = 0; i < n; i++)
    {
      bool flag = false;
      for (int j = 1; j < st[i].size(); j++)
      {
        string s1 = st[i].substr(0, j);
        string s2 = st[i].substr(j, st[i].size());
        if (mp[s1] && mp[s2])
        {
          flag = true;
          break;
        }
      }
      if (flag == true)
        cout << 1;
      else
        cout << 0;
    }

    cout << endl;
  }
  return 0;
}