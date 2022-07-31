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
      int n;
      cin>>n;
      string s;
      cin>>s;
      string temp=s;
     
      reverse(temp.begin(), temp.end());
      ll count=0;
      for(int i=0; i<(s.size())/2; i++)
      {
        //   cout<<s[i]<<" "<<temp[i]<<endl;
          if(s[i]!=temp[i])
          {
            count+=1;
            // cout<<s[i]<<" "<<temp[i]<<endl;
          }
      }
      if(count&1)
        cout<<(count/2)+1<<endl;
      else
        cout<<count/2<<endl;
    //   cout<<"s: "<<s<<endl;
    //   cout<<"temp: "<<temp<<endl;
    //   cout<<count<<endl;
    //   cout<<endl;
    }
    return 0;
}