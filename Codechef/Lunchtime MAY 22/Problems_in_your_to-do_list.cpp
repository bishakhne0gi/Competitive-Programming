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
      ll count=0;
      for(int i=1; i<=n; i++)
      {
          int z;
          cin>>z;
          if(z>=1000)
            count+=1;
      }
      cout<<count<<endl;
    }
    return 0;
}