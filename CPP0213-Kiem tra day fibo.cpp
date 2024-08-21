#include<bits/stdc++.h>

using namespace std;


int fibo(long long n){
	if(n==0||n==1){
		return 1;
	}
	long long f[100];
	f[0]=0;
	f[1]=1;
	for(int i=2;i<=100;i++){
		f[i]=f[i-1]+f[i-2];
		if(n==f[i])
		return 1;
	}
	return 0;
}
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
		for(int i=0;i<n;i++){
			if(fibo(a[i])){
				cout<<a[i]<<" ";
			}
		}
		cout<<endl;
	}
}
