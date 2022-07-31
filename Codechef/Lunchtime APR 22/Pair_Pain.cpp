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
      long long n;
      cin>>n;
      bool flag=false;
      long long count=0;
      long long sum=0;
      vector<long long> arr;
      for(long long i=1; i<=n; i++)
      {
          long long z;
          cin>>z;
          arr.push_back(z); 
      }
      long long c1=1, c2=0;
      vector<long long>c1idx;
      vector<long long>c2idx;
      long long t1=0, t2=0;
      for(long long i=0; i<n; i++)
      {
          if(arr[i]==1)
            {
                
                sum=sum+(n-c1);
                c1+=1;
                c1idx.push_back(i);
                
            }
          else if(arr[i]==2)
            {
                sum=sum+c2;
                c2+=1;
                c2idx.push_back(i);

            }
      }
      cout<<sum<<endl;
      

    //   while(t1<c1 && t2<c2)
    //   {
    //       if(c2idx[t2]<c1idx[t1])
    //       {
    //           sum=sum+(c1-t1)+(c2-(t2+1));
    //         //   cout<<"TWO "<<sum<<endl;
    //           t2=t2+1;
    //       }
    //       else
    //         t1=t1+1;
    //     //   t2=t2+1;
    //   }
    //   while(t2<c2)
    //   {
          
    //       sum=sum+(c2-(t2+1));
    //     //   cout<<"TWO "<<sum<<endl;
    //       t2=t2+1;
    //   }
    //   for(long long i=0; i<c1; i++)
    //   {
    //       sum=sum+(n-(c1idx[i]+1));
    //     //   cout<<"ONE "<<sum<<endl;
    //   }
    //     if(c1==0 && c2==0)
    //         cout<<0<<endl;
    //     else
    //         cout<<sum<<endl;
      
    }
    return 0;
}