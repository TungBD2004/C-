#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k,x;
		cin>>n>>k>>x;
		int a[n];
		int nho=0;
		int dem=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]==x){
				dem++;
			}
		}
		for(int i=0;i<n;i++){
			if(a[i]==x){
				nho=i;
				break;
			}
		}
		for(int i=nho-k+1;i<nho+k+dem-1;i++){
			if(a[i] != x){
				cout<<a[i]<<" ";
			}
		}
		cout<<endl;
	}
}
