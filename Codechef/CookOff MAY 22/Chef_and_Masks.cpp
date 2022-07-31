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
      int sx=(x*100);
      int sy=(y*10);
      if(sx==sy)
        cout<<"Cloth"<<endl;
      else if(sx<sy)
        cout<<"Disposable"<<endl;
      else if(sy<sx)
        cout<<"Cloth"<<endl;
    }
    return 0;
}