#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t-->0) {
		int n;
		cin>>n;
		int count=0;
		int arr[n];	
		for(int i=1;i<=n/2;i++) {
			if(n%i==0)
				count+=2;			
		}
		if(n%2==0)
		count--;
		cout<<count<<endl;
	}
	return 0;
}