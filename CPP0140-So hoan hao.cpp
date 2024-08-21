#include <bits/stdc++.h> 
using namespace std;

int nt(long long n){
	if(n<2)
	return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
		return 0;
	}
	return 1;
}
int hh(long long n){
	for(int i=1;i<=32;i++){
		if(nt(i)){
		long long a=pow(2,i)-1;
		if(nt(a)){
			long long hoanhao=a*pow(2,i-1);	
			if(hoanhao == n)
			return 1;
			}
		}
	}
	return 0;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		if(hh(n))
		cout<<"1\n";
		else 
		cout<<"0\n";
	}
}
