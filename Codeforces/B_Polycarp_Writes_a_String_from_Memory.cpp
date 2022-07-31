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
      ll ans=0;
      set<char> st;
      for(int i=0; i<s.size(); i++)
      {
        st.insert(s[i]);
        if(st.size()>3)
        {
            st.clear();
            ans+=1;
            st.insert(s[i]);
        }
      }
      cout<<ans+1<<endl;
    }
    return 0;
}