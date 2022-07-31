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
        ll n;
        cin >> n;
        vl a;
        vl b;
        vl c;
        vl d;
        ll count=0;
        for (int i = 0; i < n; i++)
        {
            ll z;
            cin >> z;
            a.push_back(z);
        }
        for (int i = 0; i < n; i++)
        {
            ll z;
            cin >> z;
            b.push_back(z);
        }
        for (int i = 0; i < n; i++)
        {
            c.push_back(a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            d.push_back(b[i]);
        }
        sort(c.begin(), c.end());
        sort(d.begin(), d.end());
        bool flag1 = true;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != c[i])
            {
                flag1 = false;
                break;
            }
            if (b[i] != d[i])
                
                {
                    flag1 = false;
                    break;
                }
        }
        if (flag1 == true)
            cout << 0 << endl;
        else
        {
            vector<pair<int, int>> pp;
            for (int i = 0; i < n - 1; i++)
            {
                for (int j = i + 1; j < n; j++)
                {
                    if (a[i] > a[j] || b[i] > b[j])
                    {
                        count+=1;
                        swap(a[i], a[j]);
                        swap(b[i], b[j]);
                        pp.push_back({i+1, j+1});
                    }
                }
            }
            bool flag = true;
            for (int i = 0; i < n; i++)
            {
                if (a[i] != c[i])
                {
                    flag = false;
                    break;
                }
                if (b[i] != d[i])
                {
                    flag = false;
                    break;
                }
            }
            // cout << "a" << endl;
            // for (int i = 0; i < n; i++)
            // {
            //     cout << a[i] << " ";
            // }
            // cout << endl;
            // cout << "b" << endl;
            // for (int i = 0; i < n; i++)
            // {
            //     cout << b[i] << " ";
            // }
            // cout << endl;
            // cout << "c" << endl;
            // for (int i = 0; i < n; i++)
            // {
            //     cout << c[i] << " ";
            // }
            // cout << endl;
            // cout << "d" << endl;
            // for (int i = 0; i < n; i++)
            // {
            //     cout << d[i] << " ";
            // }
            // cout << endl;
            if (flag == true)
            {
                cout<<count<<endl;
                for (int i = 0; i < pp.size(); i++)
                {
                    cout << pp[i].first << " " << pp[i].second << endl;
                }
            }
            else
                cout << -1 << endl;

            // cout << endl;
            // cout << endl;
            // cout << endl;
        }
    }
    return 0;
}