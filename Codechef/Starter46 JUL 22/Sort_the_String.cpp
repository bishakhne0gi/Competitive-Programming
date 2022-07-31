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
        ll no1 = 0;
        ll no0 = 0;
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll counter=0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                no1 += 1;
            else
                no0 += 1;
        }
        if (no1 == 0 || no0 == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            for (int i = 0; i <=n-2; i++)
            {
                if(s[i+1]=='0' && s[i]=='1')
                {
                    counter+=1;
                }
            }
            cout<<counter<<endl;
        }
    }
    return 0;
}