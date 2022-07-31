#include <bits/stdc++.h>
#define vi vector<int>
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
    // int t;
    // cin >> t;
    // while (t--)
    // {
      
    // }
    string s1,s2;
    cin>>s1>>s2;
    int flag=0;
    for(int i=0; i<s1.size(); i++)
    {   
        char c1=tolower(s1[i]);
        char c2=tolower(s2[i]);
        if(c1<c2)
            {
                flag=2;
                break;
            }
        else if(c2<c1)
        {
            flag=1;
                break;
        }
    }
    if(flag==2)
        cout<<-1<<endl;
    else if(flag==1)
        cout<<1<<endl;
    else
        cout<<0<<endl;
    return 0;
}