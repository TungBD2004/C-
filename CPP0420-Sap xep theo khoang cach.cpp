#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		int b[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			b[i]=abs(k-a[i]);
		}
		sort(b,b+n);
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(b[i] == abs(a[j]-k)){
					cout<<a[j]<<" ";
					a[j]=1000001;
				}
			}
		}
		cout<<endl;
	}
}
