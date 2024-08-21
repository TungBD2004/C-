#include<iostream>

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
		
		int max=0;
		int hieu=0;
		for(int i=0;i<n;i++){
			for(int j=i;j<n;j++){
				if(a[i]<=a[j]){
					hieu=j-i;
					if(max<hieu){
						max=hieu;
					}
				}
			}
		}
		cout<<max<<endl;
	}
	
}
