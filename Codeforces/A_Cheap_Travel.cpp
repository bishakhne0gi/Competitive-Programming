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
   ll n,m,a,b;
   cin>>n>>m>>a>>b;
   if(m*a<=b)
    cout<<n*a<<endl;
    else
    {
        cout<<(n/m)*b+min((n%m)*a,b)<<endl;
    }
    return 0;
}