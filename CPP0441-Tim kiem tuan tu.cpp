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
		int ok=0;
		int vitri;
		for(int i=0;i<n;i++){
			if(a[i] == k){
				ok=1;
				vitri=i;
				break;
				
			}
			else ok=0;
		}
		if(ok){
			cout<<"1"<<endl;
		}
		else cout<<"-1\n";
	}
	
}
