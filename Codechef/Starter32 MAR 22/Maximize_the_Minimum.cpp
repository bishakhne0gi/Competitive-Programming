#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n >> k;
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            int z;
            cin >> z;
            a.push_back(z);
        }
        sort(a.begin(),a.end());
        if(k>=n-1)
            cout<<(a[n-1])<<endl;
        else
        {
            int mini=min(k,n-1);
            cout<<(a[mini])<<endl;
        }
    }

    return 0;
}