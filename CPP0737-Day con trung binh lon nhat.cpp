#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		vector<int> a(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int max=-100000;
		int vitri=0;
		for(int i=0;i<n-k+1;i++){
			int s=0;
			for(int j=i;j<i+k;j++){
				s+=a[j];
			}
			if(max<s){
				max=s;
				vitri=i;
			}
		}
		for(int i=vitri;i<vitri+k;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}
