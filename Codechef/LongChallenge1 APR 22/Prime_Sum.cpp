#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b)
{
    // Everything divides 0
    if (a == 0)
       return b;
    if (b == 0)
       return a;
  
    // base case
    if (a == b)
        return a;
  
    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a,b;
        cin>>a>>b;
        if(a==1 || b==1)
            cout<<-1<<endl;
        else if(gcd(a,b)==1)
            cout<<1<<endl;
        else
            cout<<0<<endl;
        // else if((a%2!=0 && a%3!=0 && b%2==0 && b%3==0) ||(b%2!=0 && b%3!=0 && a%2==0 && a%3==0))
        //     cout<<1<<endl;
        // else if((a%2!=0 && a%3==0 && b%2==0 && b%3!=0) || (b%2!=0 && b%3==0 && a%2==0 && a%3!=0))
        //     cout<<1<<endl;
        // else
        //     cout<<0<<endl;

        // else if(a%2==0 && b%2 ==0)
        //     cout<<0<<endl;
        // else if(a%3==0 && b%3==0)
        //     cout<<0<<endl;
        // else if((a%2==0 && b%2!=0) ||(b%2==0 && a%2!=0))
        //     cout<<1<<endl;
        // else if(a%2!=0 && b%2!=0)
        //     cout<<1<<endl;
      
    }
    return 0;
}