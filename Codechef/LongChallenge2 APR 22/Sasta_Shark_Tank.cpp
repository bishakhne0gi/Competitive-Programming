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
      int x,y;
      cin>>x>>y;
      ll s1=(x*100)/10;
      ll s2=(y*100)/20;
      if(s1==s2)
        cout<<"ANY"<<endl;
      else if(s1>s2)
        cout<<"FIRST"<<endl;
      else if(s2>s1)
        cout<<"SECOND"<<endl;
    }
    return 0;
}