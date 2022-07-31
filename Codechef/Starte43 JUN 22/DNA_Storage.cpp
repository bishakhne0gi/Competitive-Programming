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
        ll n;
        cin>>n;
        string s;
        cin>>s;
        string res="";
        for(int i=0; i<n-1; i=i+2){
            string ans="";
            char x=s[i];
            ans+=x;
            char y=s[i+1];
            ans+=y;
            if(ans=="00")
            {
                res+='A';
            }
            else if(ans=="01")
            {
                res+='T';
            }
            else if(ans=="10")
            {
                res+='C';
            }
            else
            {
                res+='G';
            }
        }
        cout<<res<<endl;
    }
    return 0;
}