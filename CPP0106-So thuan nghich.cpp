#include<iostream>

using namespace std;
int tn(long long n){
	long long m=n;
	long long s=0;
	while(n>0){
	 s=s*10+n%10;
		n/=10;
	}
	if(m==s)
	return 1;
	return 0;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		if(tn(n)){
			cout<<"YES\n";
		}
		else 
		cout<<"NO\n";
	}	
	
}
