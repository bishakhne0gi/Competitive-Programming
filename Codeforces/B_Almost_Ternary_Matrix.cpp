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
        ll n,m;
        cin>>n>>m;
        for(ll i=1;i<=n;i++){
        for(ll j=1;j<=m;j++){
            if((i%4<=1)!=(j%4<=1))
            {
                cout<<"1 ";
            }else{
                cout<<"0 ";
            }
        }
        cout<<endl;    
    
    }
    }
    return 0;
}

