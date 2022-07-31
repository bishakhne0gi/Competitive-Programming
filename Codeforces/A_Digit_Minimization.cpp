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
      ll count=0;
      ll temp=n;
      while(temp>0)
        {
            int d=n%10;
            count+=1;
            temp/=10;
        }
        ll mini=INT_MAX;
        if(count==2)
            {
                cout<<n%10<<endl;
            }
            else
            {
                while(n>0)
                {
                    ll d=n%10;
                    mini=min(d,mini);
                    n/=10;
                }
                cout<<mini<<endl;
            }
    }
    return 0;
}