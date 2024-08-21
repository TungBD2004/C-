#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long a[n];
		vector<long long> v;
		vector<long long> b;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i] == 0){
				v.push_back(a[i]);
			}
			else b.push_back(a[i]);
		}
		for(auto x: b){
			cout<<x<<" ";
		}
		for(auto x: v){
			cout<<x<<" ";
		}
		cout<<endl;
	}
}
