#include<iostream>

using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		int b[1000001]={};
		for(int i=0;i<n;i++){
			cin>>a[i];
			b[a[i]]++;
		}
		int dem=0;
		for(int i=0;i<n;i++){
			if(b[a[i]]>1){
				dem++;
			}
		}
		cout<<dem<<endl;
	}
}
