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
    vector<vector<int>> arr;
    int r,c;
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=5; j++)
        {
            int z;
            cin>>z;
            if(z==1)
            {
                r=i, c=j;
            }
        }
    }
    int store=abs(3-r)+abs(3-c);
    cout<<store<<endl;
    // int t;
    // cin >> t;
    // while (t--)
    // {
      
    // }
    return 0;
}