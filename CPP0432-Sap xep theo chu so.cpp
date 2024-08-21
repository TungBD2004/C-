#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		string b[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			b[i]=to_string(a[i]);
		}
		for(int i=0;i<n;i++){
			for(int j=n-1;j>i;j--){
				if(b[j].compare(b[j-1]) > 0 ){
					swap(b[j],b[j-1]);
				}
			}
		}
		
		for(int i=0;i<n;i++){
			cout<<b[i];
		}
		cout<<endl;
	}
	
}
