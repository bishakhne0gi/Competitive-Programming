#include <bits/stdc++.h>
#define vi vector<int>
#define vl vector<long long>
#define ll long long
#define pii pair<int, int>
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
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<string> m;
        vector<char> store;
        string  temp="", cheg="10";
        ll counter = 0;
        for(int i=0; i<n; i++)
        {
            store.push_back(s[i]);
        }
        for(int i=n-1; i>=0; i--)
        {
            if(s[i]=='1')
            {
                if(n-i-1<=k)
                {
                    k=k-(n-i-1);
                    swap(s[n-1],s[i]);
                }
                break;
            }
        }
        for(int j=0; j<n-1; j++)
        {
            if(s[j]=='1')
            {
                if(j<=k)
                {
                    swap(s[0],s[j]);
                }
            }
        }
        // for(int i=0; i<n; i++)
        // {
        //     cout<<s[i]<<" ";
        // }
        // cout<<endl;
        for(int i=0; i<n-1; i++)
        {
            temp+=s[i];
            temp+=s[i+1];
            m.push_back(temp);
            temp="";
        }
        ll sum=0;
        for(int i=0; i<m.size(); i++)
        {
            ll org=stoi(m[i]);
            sum+=org;
            // cout<<m[i]<<" ";
        }
        cout<<sum<<endl;
    }
    return 0;
}