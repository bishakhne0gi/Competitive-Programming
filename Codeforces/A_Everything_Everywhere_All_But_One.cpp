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
      vl a;
       ll sum=0;
       bool flag=false;
      for(int i=0; i<n; i++)
    {
        ll z;
        cin>>z;
        a.push_back(z);
        sum+=z;
    }
    sort(a.begin(),a.end());
   
    for(int i=0; i<n; i++)
    {
        double temp=(sum-a[i])*1.0;
        // cout<<"TEMP: "<<temp<<endl;
        double avg=temp/(n-1)*1.0;
        // cout<<"AVG: "<<avg<<endl;
        if(avg==a[i])
            {
                flag=true;
                break;
            }
    }
    if(flag==true)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    // cout<<endl;
    }
    return 0;
}