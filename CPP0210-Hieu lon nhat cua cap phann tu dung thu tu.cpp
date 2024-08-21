#include<bits/stdc++.h> 
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+1];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int hieu=-1;
		for(int i=0;i<n;i++){
			int tam=-1;
			for(int j=i+1;j<n;j++){
				if(a[i]<a[j]){
					 tam=a[j]-a[i];
				}
				if(tam>hieu){
					hieu=tam;
				}
			}
		}
		cout<<hieu<<endl;
	}
	
}
