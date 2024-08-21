#include<bits/stdc++.h>

using namespace std;

long long UCLN(long long a,long long b){
	if(b==0)
	return a;
	return UCLN(b,a%b);
}
long long BCNN(long long a,long long b){
	long long c=a*b;
	return c/UCLN(a,b);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long c=1;
		for(int i=1;i<=n;i++){
			c=BCNN(c,i);
		}
		cout<<c<<endl;
	}
	
}
