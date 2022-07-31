#include <bits/stdc++.h>
#define vi vector<int>
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
    // int t;
    // cin >> t;
    // while (t--)
    // {
      
    // }
    string s;
    cin>>s;
    string ans;
    // transform(s.begin(), s.end(), s.begin(), ::tolower);
    for(int i=0; i<s.length(); i++)
    {
      
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y' || s[i] == 'Y' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'  )
        {
            continue;
        }
        else
         {
             ans+=".";
             ans+=tolower(s[i]);
         }
    }
    cout<<ans<<endl;
    return 0;
}