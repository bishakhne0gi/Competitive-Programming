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
      int x,y,z;
      cin>>x>>y>>z;
      if(z%x==0 && z%y==0)
        cout<<"ANY"<<endl;
      else if(z%x==0 && z%y!=0)
        cout<<"CHICKEN"<<endl;
      else if(z%x!=0 && z%y==0)
        cout<<"DUCK"<<endl;
      else if(z%x!=0 && z%y!=0)
        cout<<"NONE"<<endl;
    }
    return 0;
}   