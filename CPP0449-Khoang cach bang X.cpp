#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		set<int> se;
		for(int i=0;i<n;i++){
			cin>>a[i];
			se.insert(a[i]);
		}
		int check=-1;
		for(int i=0;i<n;i++){
			int dem=k+a[i];
			if(se.find(dem)!=se.end()){
				check=1;
				break;
			}
		}
		cout<<check<<endl;
	}
	
}
