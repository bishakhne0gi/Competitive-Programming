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
    int n;
    cin>>n;
    vector<int> arr= {4,7,47,74,77,44,444,447,474,477,777,774,744};
    bool isTrue = false;
    for(int i=0;i<13;i++){
        if(n%arr[i]==0){
            isTrue =true;
            break;
        }
    }
    if(isTrue){
        cout<<"YES"<<"\n";
    }else{
        cout<<"NO"<<"\n";
    }
    return 0;
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     int n;
        
      
    // }
    return 0;
}