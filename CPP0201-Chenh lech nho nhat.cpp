#include<bits/stdc++.h> 
using namespace std;
using ll=long long;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		ll a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		ll hieu=INT_MAX;
		for(int i=1;i<n;i++){
			hieu=min(hieu,a[i]-a[i-1]);
		}
		cout<<hieu<<endl;
	}
}
