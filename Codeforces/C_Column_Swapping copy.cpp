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
   ll n,m;
   cin>>n>>m;
   vector<vector<int>> a(n,vector<int>(m));
   for(int i=0; i<n; i++)
   {
       for(int j=0; j<m; j++)
       {
          cin>>a[i][j];
       }
   } 
   ll x=0;
   while(x<n && is_sorted(a[x].begin(),a[x].end())) x++;
   if(x==n)
    {
    cout<<"1 1"<<endl; 
    }
    auto b=a[x];
    sort(b.begin(),b.end());
    vector<int> p;
    for(int j=0; j<m; j++)
    {
        if(a[x][j]!=b[j])
        {
            p.push_back(j);
        }
    }
    if(p.size()>2)
    {
        cout<<"-1"<<endl;
    }
    int f=0;
    for(int i=0; i<n; i++)
    {
        swap(a[i][p[0]], a[i][p[1]]);
        if(!is_sorted(a[i].begin(), a[i].end()))
        {
            cout<<1<<endl;
            f=1;
            break;
        }
    }
    if(!f)
    {
        cout<<p[0]+1<<" "<<p[1]+1 <<endl;
    }

}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
      helper();
    }
    return 0;
}