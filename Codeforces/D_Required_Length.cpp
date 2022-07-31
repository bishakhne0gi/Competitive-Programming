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
ll count_digits(ll n)
{
    string num = to_string(n);
    return num.size();
}
int main()
{
    // int t;
    // cin >> t;
    // while (t--)
    // {
      
    // }
    ll n,x;
    cin>>n>>x;
    ll temp=x,maxi=INT_MIN;
    while(temp>0)
    {
        ll d=temp%10;
        maxi=max(maxi,d);
        temp/=10;
    }
    
    return 0;
}