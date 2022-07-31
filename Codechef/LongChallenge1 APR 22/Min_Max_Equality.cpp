#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> arr;
        for(int i=0; i<n; i++)
        {
            int z;
            cin>>z;
            arr.push_back(z);
        }
        unordered_set<int> s(arr.begin(),arr.end());
        int u=s.size();
        bool flag=true;
        for(int i=0; i<n-1; i++)
        {
            if(arr[i]==arr[i+1])
            {
                flag=false;
                break;
            }
        }
        //7 1
// 1 2 2 3 3 3 4

//3 1
// 1 2 3

// 5 1
// 1 1 1 1 1

// 4 2
// 3 3 3 1

        if(u==n)
            cout<<n<<endl;
        else if(u+k >=n)
            cout<<n<<endl;
        else if(flag==true)
            cout<<n<<endl;
        else
        {
            int sum=1;
            vector<int> store;
            for(int i=0; i<n-1; i++)
            {
                if(arr[i]==arr[i+1])
                {
                    sum=sum+1;       
                }
                else
                {
                    store.push_back(sum);
                    sum=1;
                }
            }
            sort(store.begin(),store.end(), greater<>());
           
            vector<int> repeat;
            for(int i=0; i<store.size(); i++)
            {
                if(store[i]>1)
                    repeat.push_back(store[i]);
            }
             for(int i=0; i<repeat.size();i++)
            {
                cout<<repeat[i]<<" ";
            }
            cout<<endl;
            int temp=k;
            int count=0;
    
        }
        
      
    }
    return 0;
}