#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n-k+1;i++){
			int max1=a[i];
			for(int j=i;j<i+k;j++){
				max1=max(a[j],max1);
			}
			cout<<max1<<" ";
		}
		cout<<endl;
	}
}
