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
      vl a(n);
      for(ll i=0; i<n; i++)
        cin>>a[i];
      for(int i=0; i<n; i++)
      {
        ll m;
        cin>>m;
        string s;
        cin>>s;
        ll sum=0;
        for(int j=0; j<m; j++)
        {
           if(s[j]=='D')
           {
            if(a[i]==9)
            {
                a[i]=0;
            }
            else
            {
                a[i]+=1;
            }
           }
            else
            {
                if(s[j]=='U')
                {
                    if(a[i]==0)
                    {
                        a[i]=9;
                    }
                    else
                    {
                        a[i]-=1;
                    }
                }
            }
        }
      }
      for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
      cout<<endl;
    }
    return 0;
}