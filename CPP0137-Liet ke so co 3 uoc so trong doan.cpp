#include<bits/stdc++.h> 
using namespace std;

int nt(long long n){
	if(n<2){
		return 0;
	}
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long a,b;
		cin>>a>>b;
		int dem=0;
		for(long long i=sqrt(a);i<=sqrt(b);i++){
			if(nt(i)){
				dem++;
			}
		}
		cout<<dem<<endl;
	}
}
