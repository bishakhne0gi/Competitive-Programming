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
      vector<int> arr;
      vector<int> temp;
      bool flag=true;
      for(int i=0; i<n; i++)
      {
          int z;
          cin>>z;
          arr.push_back(z);
      }
      for(int i=0; i<n; i++)
      {
          temp.push_back(arr[i]);
      }
      sort(temp.begin(),temp.end());
      for(int i=0; i<n-1; i++)
      {
          if(arr[i]>arr[i+1])
          {
              swap(arr[i],arr[i+1]);
              break;
          }
      }
      for(int i=0; i<n; i++)
      {
          if(arr[i]!=temp[i])
            {
                flag=false;
                break;
            }
      }
      if(flag==true)
        cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
    return 0;
}