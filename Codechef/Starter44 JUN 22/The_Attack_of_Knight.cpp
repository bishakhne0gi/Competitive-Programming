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
      ll x1,y1,x2,y2;
      cin>>x1>>y1;
      cin>>x2>>y2;
      ll diffx=abs(x1-x2);
      ll diffy=abs(y1-y2);
      
        if(diffx==0)
        {
            if(diffy==2 || diffy==4)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else if(diffy==0)
        {
            if(diffx==2 || diffx==4)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else if(diffx==1)
        {
            if(diffy==3)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else if(diffy==1)
        {
            if(diffx==3)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else if(diffx==2)
        {
             if(diffy==3 || diffy==4)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else if(diffy==2)
        {
             if(diffx==3 || diffx==4)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else if(diffx==3 && diffy==3)
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
    }
    return 0;
}