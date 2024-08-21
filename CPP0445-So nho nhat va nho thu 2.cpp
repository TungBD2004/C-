#include<bits/stdc++.h>

using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		map<int,int> mp;
		for(int i=0;i<n;i++){
			cin>>a[i];
			mp[a[i]]++;
		}
		sort(a,a+n);
		if(mp[a[0]]==n){
			cout<<"-1\n";
		}
		else{
			cout<<a[0]<<" "<<a[1]<<endl;
		}
	}
	
}
