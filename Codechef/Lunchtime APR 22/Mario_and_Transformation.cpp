#include <bits/stdc++.h>
#define vi vector<int>
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
      int x;
      cin>>x;
      if(x%3==1)
        cout<<"HUGE"<<endl;
      else if(x%3==2)
        cout<<"SMALL"<<endl;
      else if(x%3==0)
        cout<<"NORMAL"<<endl;

    }
    return 0;
}