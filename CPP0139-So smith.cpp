#include <bits/stdc++.h> 
using namespace std;

int nt(int n){
	if(n<2)
	return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
		return 0;
	}
	return 1;
}
int tongcs(int n){
	int s=0;
	while(n>0){
		s+=n%10;
		n/=10;
	}
	return s;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(nt(n)){
			cout<<"NO\n";
			continue;
		}
		int s=0;
		int i=2;
		int k=n;
		while(k>1){
			while(k%i==0){
				k/=i;
				s+=tongcs(i);
			}
			i++;
		}
		if(s==tongcs(n)){
			cout<<"YES\n";
		}
		else cout<<"NO\n";
	}
}
