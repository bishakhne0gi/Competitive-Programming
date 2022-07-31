#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cin >> s;
        vector<pair<int, int>> p;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='1')
            {
                p.push_back({i+1,n-i});
                for(int j=i; j<n; j++)
                {
                    if(s[j]=='1')
                        s[j]='0';
                    else
                        s[j]='1';
                }
            }
        }
        cout<<p.size()<<endl;
        for(int i=0; i<p.size(); i++)
        {
            cout<<p[i].first<<" "<<p[i].second<<endl;   
        }
            
       
    }
    return 0;
}