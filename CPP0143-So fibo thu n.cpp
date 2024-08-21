#include<bits/stdc++.h> 
using namespace std;

void fibo(int n){
	long long f[n];
	f[0]=0;
	f[1]=1;
	for(int i=2;i<=n;i++){
		f[i]=f[i-1]+f[i-2];
	}
	cout<<f[n]<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		fibo(n);
	}
}
