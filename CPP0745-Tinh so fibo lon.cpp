#include<bits/stdc++.h>
using namespace std;

using ll=long long;
ll f[1001];
const int mod=1e9+7;
ll fibo(int n){
	f[0]=0,f[1]=1;
	for(int i=2;i<=1000;i++){
		f[i]=f[i-1]+f[i-2];
		f[i] %= mod;
	}
	return f[n];
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<fibo(n)<<endl;
	}
}
