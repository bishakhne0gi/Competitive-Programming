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
    int n;
    cin>>n;
    vector<int> arr(n+1,0);
    for(int i=1; i<=n; i++)
    {
        int k;
        cin>>k;
        arr[k]=i;
    }
    for(int i=1; i<=n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // int t;
    // cin >> t;
    // while (t--)
    // {
      
    // }
    return 0;
}