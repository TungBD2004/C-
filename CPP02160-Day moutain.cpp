#include<bits/stdc++.h> 
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int l,r;
		cin>>l>>r;
		int dem=l;
		for(int i=l;i<r;i++){
			if(a[i]>a[i+1]){
				dem=i+1;
				break;
			}
		}
		int ok=1;
		for(int i=dem;i<r;i++){
			if(a[i]<a[i+1]){
				ok=0;
			}
		}
		if(ok){
			cout<<"Yes\n";
		}
		else cout<<"No\n";
	}
}
