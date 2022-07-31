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
        ll n,m;
        cin>>n>>m;
        ll sum=0;
        vector<ll> arr;
        for(int i=0; i<n; i++)
        {
            ll z;
            cin>>z;
            arr.push_back(z);
        }
        sort(arr.begin(),arr.end());
        reverse(arr.begin(),arr.end());
        arr[0]*=2;
        for(int i=0; i<n-1; i++)
        {
            sum+=arr[i]+1;
        }
        sum+=1;
        if(n>m)
            cout<<"NO"<<endl;
        else
        {
            if(sum<=m)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
      
    }
    return 0;
}