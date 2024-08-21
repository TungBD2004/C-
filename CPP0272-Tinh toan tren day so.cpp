#include<bits/stdc++.h>
using namespace std;

long long UCLN(long long a,long long b){
	if(b==0)
	return a;
	return UCLN(b,a%b);
}

long long mod = 1e9 + 7;


int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		long long h=a[0];
		long long g=a[0];
		for(int i=1;i<n;i++){
			h = h* a[i] % mod;
			g=UCLN(g,a[i]);
		}
		long long s=1;
		for(int i=1;i<=g;i++){
			s = s * h % mod;
		}
		cout<<s<<endl;
	}
}
