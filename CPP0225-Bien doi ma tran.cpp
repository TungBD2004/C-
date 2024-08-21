#include<bits/stdc++.h> 
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n][n];
		int s=0,hang[n]={},cot[n]={};
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>a[i][j];
				s+=a[i][j];
				hang[i]+=a[i][j];
				cot[j]+=a[i][j];
			}
		}
		sort(cot,cot+n);
		sort(hang,hang+n);
		int x=max(hang[n-1],cot[n-1])*n;
		cout<<x-s<<endl;
	}
}

