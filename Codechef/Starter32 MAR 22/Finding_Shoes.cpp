#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m;
    cin >> t;
    while (t--)
    {
        cin>>n>>m;
      int store=n*2;
      if(m>=n)
        cout<<store/2<<endl;
      else
        cout<<(store-m)<<endl;
    }
    return 0;
}