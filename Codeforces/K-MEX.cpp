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
        ll n, m, k;
        cin >> n >> m >> k;
        vl a(n);
        vl store(1000,0);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            store[a[i]]++;
        }
        sort(a.begin(), a.end());
        bool flag = true;
        if (m < k)
            cout << "NO" << endl;
        for(int i=0; i<m-1; i++)
        {
            if(store[i]==1)
            {
                flag=false;
                break;
            }
        }
    }
    return 0;
}