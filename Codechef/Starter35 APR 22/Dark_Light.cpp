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
      int n,k;
      cin>>n>>k;
      if(k==0 && (n%4==0))
        cout<<"Off"<<endl;
      else if(k==0 && (n%4!=0))
        cout<<"On"<<endl;
      else if(k==1 && (n%4==0))
        cout<<"On"<<endl;
      else
        cout<<"Ambiguous"<<endl;
    }
    return 0;
}