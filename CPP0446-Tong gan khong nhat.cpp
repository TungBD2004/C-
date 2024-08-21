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
		int min=1000001;
		int dem;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				int tong=abs(a[i]+a[j]);
				if(tong<min){
					min=tong;
					dem=a[i]+a[j];
				}
			}
		}
		cout<<dem<<endl;
	}
	
}

