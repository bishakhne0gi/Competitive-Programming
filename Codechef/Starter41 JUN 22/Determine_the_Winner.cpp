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
      ll pa,pb,qa,qb;
      cin>>pa>>pb>>qa>>qb;
      ll p=max(pa,pb);
      ll q=max(qa,qb);
      if(p==q)
        cout<<"TIE"<<endl;
      else if(p<q)
        cout<<"P"<<endl;
      else if(p>q)
        cout<<"Q"<<endl;
    }
    return 0;
}