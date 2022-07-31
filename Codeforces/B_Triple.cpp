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
    int t;
    cin >> t;
    while (t--)
    {
      int n;
      cin>>n;
      vector<int> arr;
      for(int i=1; i<=n; i++)
      {
          ll z;
          cin>>z;
          arr.push_back(z);
      }
      unordered_map<int,int> m;
      for(int i=0; i<n; i++)
      {
          
              m[arr[i]]++;
       
      }
      int count=0;
      int store;
      bool flag= false;
      for(auto it: m)
      {
          if(it.second>=3)
          {
              flag=true;
              store=it.first;

              break;
          }
            
      }
    //   cout<<"COUNT: "<<count<<endl;
      if(n<3)
        cout<<-1<<endl;
      else if(flag==false)
        cout<<-1<<endl;
      else
        cout<<store<<endl;
    }
    return 0;
}