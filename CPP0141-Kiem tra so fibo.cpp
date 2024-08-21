#include<bits/stdc++.h>
using namespace std;

using ll=long long;
int fibo(ll n){
	ll f[92];
	f[0]=0;
	f[1]=1;
	for(int i=2;i<=92;i++){
		f[i]=f[i-1]+f[i-2];
		if(n==f[i]){
			return 1;
			break;
		}
	}
	return 0;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		if(fibo(n)){
			cout<<"YES\n";
		}
		else 
		cout<<"NO\n";
	}
}
