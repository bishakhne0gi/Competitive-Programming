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
    string temp="";
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='+')
            continue;
        else
            temp+=s[i];
    }

    sort(temp.begin(),temp.end());
   
    string ans="";
    for(int i=0; i<temp.size()-1; i++)
    {
        ans+=temp[i];
        ans+="+";
    }
    ans+=temp[temp.size()-1];
    cout<<ans<<endl;
    return 0;
}