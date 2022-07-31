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
      int first=s[0]+1-'a';
    //   cout<<first<<endl;
      int second=s[1]+1-'a';
    //   cout<<second<<endl;
      if(first==1)
        {
            int store=abs(first-second);
            cout<<store<<endl;
        }
     
      else
      {
          if(first<second)
            {
                int store=25*(first-1)+(second-1);
                cout<<store<<endl;
            }
            else
            {
                 int store=25*(first-1)+second;
                cout<<store<<endl;
            }
          
      }
        //    cout<<endl;
    }
    return 0;
}