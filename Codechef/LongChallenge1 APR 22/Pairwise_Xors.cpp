#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
      long long n;
      cin>>n;
    //   long long a=n & ~(n-1);
    //   if(n&1 || n==a)
    //     cout<<-1<<endl;
    //   else
    //     cout<<a/2<<" "<<n/2<<" "<<(n-a)/2<<endl;
        long long k=~(n-1);
        long long first=k & n;
        long long set_bit= __builtin_popcount(n-1);
        // cout<<set_bit<<endl;
        long long store=log(n-1)/ log (2);
        // cout<<store+1<<endl;
        if(n%2!=0)
            cout<<-1<<endl;
        else if(set_bit==(store+1))
            cout<<-1<<endl;
        else 
            cout<<first/2<<" "<<(n-first)/2<<" "<<n/2<<endl;

    }
    return 0;
}