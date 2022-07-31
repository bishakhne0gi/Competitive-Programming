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
      vl a;
      ll count=0;
       for(int i=0; i<n; i++)
    {
        ll z;
        cin>>z;
        a.push_back(z);
    }
    ll maxi=a[0];
    for(int i=0; i<n-1; i++)
    {
        if(a[i]>a[i+1])
        {
            count+=1;
            i++;
        }
    }
    cout<<count<<endl;
    }
    return 0;
}