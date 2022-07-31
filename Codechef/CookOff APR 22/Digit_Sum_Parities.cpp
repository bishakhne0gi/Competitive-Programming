#include <bits/stdc++.h>
using namespace std;
int helper(int k)
{
    int sum=0;
    while(k>0)
    {
        int d=k%10;
        sum+=d;
        k/=10;
    }
    return sum;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
      int n;
      cin>>n;
      int k=n;
      int d=k%10;
      int store=helper(k);
      if(helper(k)%2==0)
        {
            while(helper(k)%2==0){
                k=k+1;
            }
            cout<<k<<endl;
        }
        else if(helper(k)%2!=0)
        {
            while(helper(k)%2!=0){
                k=k+1;
            }
            cout<<k<<endl;
        }
    }
    return 0;
}