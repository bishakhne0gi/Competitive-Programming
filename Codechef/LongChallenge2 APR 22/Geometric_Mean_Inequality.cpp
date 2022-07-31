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
      ll n;
      cin>>n;
      ll c_m1=0;
      ll c_1=0;
      vl arr;
      for(int i=0; i<n; i++)
      {
            int z;
            cin>>z;
            if(z==-1)
                c_m1+=1;
            else
                c_1+=1;
            arr.push_back(z);
      }
      ll store=abs(c_1-c_m1);
      if(n&1)
      {
         if(store==1)
            cout<<"YES"<<endl;
         else
            cout<<"NO"<<endl;
      }
      else
        {
         if(store<2)
            cout<<"YES"<<endl;
         else if(store==2 && !(c_m1&1) && !(c_1&1))
            cout<<"YES"<<endl;
         else
            cout<<"NO"<<endl;
             
        }
    }
    return 0;
}