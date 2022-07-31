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
      if(n<=1399)
        cout<<"Division 4"<<endl;
      else if(n>=1400 && n<=1599)
        cout<<"Division 3"<<endl;
      else if(n>=1600 && n<=1899)
        cout<<"Division 2"<<endl;
      else
        cout<<"Division 1"<<endl;
      
    }
    return 0;
}