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
      int n;
      cin>>n;
      string str= to_string(n);
      cout<<str<<endl;
      int sum1=str[0]+str[1]+str[2];
      int sum2=str[3]+str[4]+str[5];
      cout<<"SUM 1: "<<sum1<<endl;
      cout<<"SUM 2: "<<sum2<<endl;
      if(sum1==sum2)
        cout<<"YES"<<endl;
      else
        cout<<"NO"<<endl;
    }
    return 0;
}