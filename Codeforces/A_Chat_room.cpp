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
    string s;
    cin>>s;
    string store="hello";
    int j=0, count=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]==store[j])
        {
            j++;
            count+=1;
        }
    }
    if(count==5)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    // int t;
    // cin >> t;
    // while (t--)
    // {
      
    // }
    return 0;
}