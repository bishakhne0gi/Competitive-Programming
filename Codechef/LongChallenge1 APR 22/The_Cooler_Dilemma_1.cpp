#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
     int x,y,m;
     cin>>x>>y>>m;
     int store=x*m;
     if(store<y)
        cout<<"YES"<<endl;
     else   
        cout<<"NO"<<endl; 
    }
    return 0;
}