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
    int n,m;
    cin>>n>>m;
    int count=0;
    for(int i=1;;i++)
    {
        if(n-i==0) break;
        if(m-i==0) break;
        count++;
    }
    if(count&1)
        cout<<"Malvika"<<endl;
        
    else
       cout<<"Akshat"<<endl;
    // int t;
    // cin >> t;
    // while (t--)
    // {
      
    // }
    return 0;
}