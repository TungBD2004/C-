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
		long long a,b;
		cin>>a>>b;
		cout<<BCNN(a,b)<<" "<<UCLN(a,b)<<endl;
		
	}
	
}
