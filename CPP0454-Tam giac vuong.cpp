#include<bits/stdc++.h>
using namespace std;

int check(long long a[],int n){
	if(a[0]+a[1]==a[2]){
		return 1;
	}
	for(int i=n-1;i>=2;i--){
		int l=0,r=i-1;	
		while(l<r){
			if(a[l]+a[r]==a[i]){
				return 1;
			}
			else if(a[l]+a[r]>a[i]){
				r--;
			}
			else l++;
		}
	}
	return 0;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			a[i]*=a[i];		
		}
		sort(a,a+n);
		if(check(a,n)){
			cout<<"YES\n";
		}
		else cout<<"NO\n";
	}
}
