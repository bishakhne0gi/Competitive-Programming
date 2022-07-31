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
      ll l,r;
      cin>>l>>r;
      ll count=0,temp,temp_o;
      bool flag=false;
      vl a;
    //   if((l&1))
    //   {
    //       temp=(l+1)+7;
    //       if(temp+1>r)
    //         cout<<-1<<endl;
    //       else
    //         cout<<l<<" "<<l+1<<" "<<temp<<" "<<temp+1<<endl;
    //   }
    //   else
    //   {
    //       temp_o=(l+1)+3;
    //       if(temp_o+1>r)
    //         cout<<-1<<endl;
    //       else
    //         cout<<l<<" "<<l+1<<" "<<temp_o<<" "<<temp_o+1<<endl;
    //   }
    while(l<=r-3)
    {
          if(((l)^(l+1)^(l+2)^(l+3))==0)
          {
              flag=true;
              a.push_back(l);
              a.push_back(l+1);
              a.push_back(l+2);
              a.push_back(l+3);
              break;
          }
          else
          {
              count+=1;
              if(count>=11)
                break;
          }
          l++;
    }
      if(flag==true)
      {
          cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<endl;
      }
      else
      {
          cout<<-1<<endl;
      }
    }
    return 0;
}