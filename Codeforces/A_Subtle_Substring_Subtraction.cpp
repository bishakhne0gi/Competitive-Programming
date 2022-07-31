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
      string s;
      cin>>s;
      int len=s.size();
      int sum=0;
    //sort(s.begin(),s.end());
    //reverse(s.begin(),s.end());
    //   cout<<s<<endl;
      if(len==1)
        cout<<"Bob "<<s[0]+1-'a'<<endl;
      else if(len%2==0)
      {
          for(int i=0; i<len; i++)
          {
              int count=s[i]+1-'a';
            //   cout<<count<<endl;
              sum+=count;
          }
        cout<<"Alice "<<sum<<endl;
      }
      else
      {
          int sum1=0;
           for(int i=0; i<len-1; i++)
          {
              int count=s[i]+1-'a';
            //   cout<<count<<endl;
              sum1+=count;
          }
          int sum2=0;
           for(int i=1; i<len; i++)
          {
              int count=s[i]+1-'a';
            //   cout<<count<<endl;
              sum2+=count;
          }
          if(sum1>=sum2)
            {
                  sum=sum1;
                  int count=s[len-1]+1-'a';
                  sum-=count;
            }
          else
            {
                  sum=sum2;
                  int count=s[0]+1-'a';
                  sum-=count;
            }

          cout<<"Alice "<<sum<<endl;
      }

    }
    return 0;
}