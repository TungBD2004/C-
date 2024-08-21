#include<bits/stdc++.h> 
using namespace std; 

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,t1;
		cin>>n>>t1;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		while(t1--){
			int sum=0;
			int l,r;
			cin>>l>>r;
			if(l<r){
				for(int i=l-1;i<r;i++){
					sum+=a[i];
				}
			}
			else {
				for(int i=r-1;i<l;i++){
					sum+=a[i];
				}
			}
			cout<<sum<<endl;
			}
			
		}
	}

